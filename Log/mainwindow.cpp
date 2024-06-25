#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "StackIbdex.h"
#include "gameboard.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>


GameBoard currentgame;
char EnableARRAY[9]={1,1,1,1,1,1,1,1,1};
const QColor Enable_COLOR(220, 40, 16);
const QColor Disable_COLOR(128, 128, 128);
const QColor Win_COLOR(220, 255, 200);
bool saveflage=false;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    XObuttons[0] = ui->XO1;
    XObuttons[1] = ui->XO2;
    XObuttons[2] = ui->XO3;
    XObuttons[3] = ui->XO4;
    XObuttons[4] = ui->XO5;
    XObuttons[5] = ui->XO6;
    XObuttons[6] = ui->XO7;
    XObuttons[7] = ui->XO8;
    XObuttons[8] = ui->XO9;

    if (!connOpen()) {
        qDebug() << "Error: Unable to connect to database!";
        return;
    }


    ui->stackedWidget->setCurrentIndex(LogIn_Page);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_LogIn_clicked()
{
    //start time
    auto start = std::chrono::high_resolution_clock::now();

    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();


    if (!connOpen()) {
        qDebug() << "Error: Unable to connect to database!";
        return;
    }

    QSqlQuery qry;
    qry.prepare("SELECT * FROM Players_Data WHERE Name='"+username+"' AND Passward='"+password+"'  ");

    if(username == "test" && password == "test")
    {
        //search for the hasshed password
        // Hash the input password using SHA-256
        QByteArray inputPasswordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
        QString inputPasswordHashHex = inputPasswordHash.toHex();
        saveflage=true;
        //if(inputPasswordHashHex==SQLhashedpassword)
        currentgame.setPlayer1name(username);

        //end time
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        qDebug() << "Data Base search time: " << 1000L*elapsed.count() << " us";

        ui->stackedWidget->setCurrentIndex(Main_Page);

    }
    else if(username == "test")
    {
        QMessageBox::warning(this, "LogIn", "wrong password");
    }
    else
    {
        QMessageBox::warning(this, "LogIn", "Invalid user");
    }
}


void MainWindow::on_Defaultb_clicked()
{
    saveflage=false;
    currentgame.setPlayer1name("Default");
    ui->stackedWidget->setCurrentIndex(Selection_Page);
}



void MainWindow::on_pushButton_SignUp_clicked()
{
    ui->lineEdit_Username1->clear();
    ui->lineEdit_Password1->clear();
    ui->lineEdit_ConfirmPassword->clear();
    ui->stackedWidget->setCurrentIndex(SignUp_Page);
}



void MainWindow::on_pushButton_SignUp_Back_clicked()
{
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
    ui->stackedWidget->setCurrentIndex(LogIn_Page);
}


void MainWindow::on_pushButton_SignUp_LogIn_clicked()
{
    //start time
    auto start = std::chrono::high_resolution_clock::now();

    //save to database
    QString username = ui->lineEdit_Username1->text();
    QString password = ui->lineEdit_Password1->text();
    QString confirm_password = ui->lineEdit_ConfirmPassword->text();
    if (username.isEmpty() || password.isEmpty() || confirm_password.isEmpty())
    {
        QMessageBox::warning(this, "SignUp", "Please fill in all fields.");
        return;  // Stop further execution
    }
    if(password == confirm_password)
    {

        QByteArray passwordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
        QString hashedPasswordHex = passwordHash.toHex();

        // Print the hashed password in hexadecimal format
        qDebug() << "Hashed password:" << hashedPasswordHex;

        //end time
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        qDebug() << "Account saving to data base time: " << 1000L*elapsed.count() << " us";

        ui->stackedWidget->setCurrentIndex(LogIn_Page);
    }
    else
        QMessageBox::warning(this, "SignUp", "password doesn't match");
    return;
}

void MainWindow::on_XO1_clicked()
{
     updateButton(0);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }

}

void MainWindow::on_XO2_clicked()
{
    updateButton(1);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }
}

void MainWindow::on_XO3_clicked()
{
    updateButton(2);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }
}

void MainWindow::on_XO4_clicked()
{
    updateButton(3);
    CheckEnableBoard();
    checkgamestate();
    checkCPU();
}

void MainWindow::on_XO5_clicked()
{
    updateButton(4);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }
}

void MainWindow::on_XO6_clicked()
{
    updateButton(5);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }
}



void MainWindow::on_XO7_clicked()
{
    updateButton(6);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }
}


void MainWindow::on_XO8_clicked()
{
    updateButton(7);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }
}


void MainWindow::on_XO9_clicked()
{
    updateButton(8);
    CheckEnableBoard();
    checkgamestate();
    if(currentgame.getwincode()==-1){ //continuou
        checkCPU();
    }
}

void MainWindow:: colorButton(int index){
    // Retrieve the current text color from the palette
    const QPalette& palette = XObuttons[index]->palette();
    QColor textColor = palette.color(QPalette::ButtonText);
    // Set the style sheet for the button
    XObuttons[index]->setStyleSheet("font-size: 60px; font-weight: bold; color: " + textColor.name() + ";"
                                    "background-color: " + Win_COLOR.name());
}

void MainWindow::updateButton(int index) {
    // Disable the button
    EnableARRAY[index] = 0;
    DisableBoard();

    // Determine the row and column from the index
    int row = (index / 3) ;  // Assuming 3x3 grid
    int col = (index % 3) ;  // Assuming 3x3 grid

    // Play at position corresponding to the index
    currentgame.playAtPosition(row, col);

    // Set the text on the button
    XObuttons[index]->setText(currentgame.getCellValue(row, col));

    // Determine the color based on move number
    QString textColor = "blue";
    if(currentgame.getMoveNum() % 2 == 0){
        ui->gamestatelabel->setText(currentgame.getPlayer1name()+"'s turn");
    }
    else{
        textColor = "yellow";
        ui->gamestatelabel->setText(currentgame.getPlayer2name()+"'s turn");
    }
    // Set the style sheet for the button
    XObuttons[index]->setStyleSheet("font-size: 60px; font-weight: bold; color: " + textColor + ";"
                                    "background-color: rgb(128, 128, 128);");

    // Check and enable the board based on EnableARRAY
    CheckEnableBoard();
}

void MainWindow::enableButton(int index) {
    // Retrieve the current text color from the palette
    const QPalette& palette = XObuttons[index]->palette();
    QColor textColor = palette.color(QPalette::ButtonText);

    // Set the new style with the current text color and background color
    XObuttons[index]->setStyleSheet("font-size: 60px; font-weight: bold; "
                                    "color: " + textColor.name() + ";"
                                    "background-color: " + Enable_COLOR.name());

    // Enable the button
    XObuttons[index]->setEnabled(true);
}

void MainWindow::disableButton(int index){
    // Retrieve the current text color from the palette
    const QPalette& palette = XObuttons[index]->palette();
    QColor textColor = palette.color(QPalette::ButtonText);

    // Set the new style with the current text color and background color
    XObuttons[index]->setStyleSheet("font-size: 60px; font-weight: bold; "
                                    "color: " + textColor.name() + ";"
                                    "background-color: " + Disable_COLOR.name());

    // Enable the button
    XObuttons[index]->setEnabled(false);
}

void MainWindow::DisableBoard(){
    // Loop through the array of QPushButton pointers
    for (int i = 0; i < 9; ++i) {
        disableButton(i);
    }


}

void MainWindow::EnableBoard(){
    // Loop through the array of QPushButton pointers
    for (int i = 0; i < 9; ++i) {
        enableButton(i);
    }

}

void MainWindow::ColorBoard(int wincode){
    if(wincode==101){
        for (int i = 0; i < 3; ++i) {
            colorButton(2*i+2);
        }
    }
    else if(wincode==110){
        for (int i = 0; i < 9; i += 4) {
            colorButton(i);
        }
    }
    else if(wincode/10==4){
        wincode-=40;
        for (int i = 0; i < 3; i ++) {
            colorButton(3*i+wincode);
        }
    }
    else{
        wincode-=4;
        wincode/=10;
        for (int i = 0; i < 3; i ++) {
            colorButton(3*wincode+i);
        }
    }
}

void MainWindow::CheckEnableBoard(){
    // Loop through the array of QPushButton pointers
    for (int i = 0; i < 9; ++i) {
        if (EnableARRAY[i] == 1) {
            enableButton(i); // Use the specified background color constant
        }
    }

}

void MainWindow::clearButtonText() {
    for (int i = 0; i < 9; ++i) {
        XObuttons[i]->setText("");
    }
}

void MainWindow::checkCPU(){
    switch (currentgame.getMode()) {
    case 3: //2player
        //Nothing
        break;
    case 2: //impossible
        updateButton(currentgame.getCPUindex());
        CheckEnableBoard();
        checkgamestate();
        break;
    case 1: //easy
        updateButton(currentgame.getCPUindex());
        CheckEnableBoard();
        checkgamestate();
        break;
    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}

void MainWindow::checkgamestate(){
    int gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:
        //continuou
        break;
    case 1:
        ui->gamestatelabel->setText(currentgame.getPlayer1name()+" Win");
        DisableBoard();
        ColorBoard(currentgame.getwincode());
        if(saveflage){
        QMessageBox::warning(this, "Reminder", "Don't forget to save the match");
        }
        break;
    case -1:
        ui->gamestatelabel->setText(currentgame.getPlayer2name()+" Win");
        DisableBoard();
        ColorBoard(currentgame.getwincode());
        if(saveflage){
            QMessageBox::warning(this, "Reminder", "Don't forget to save the match");
        }
        break;
    case 2:
        ui->gamestatelabel->setText("It's a Tie");
        DisableBoard();
        if(saveflage){
            QMessageBox::warning(this, "Reminder", "Don't forget to save the match");
        }
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }

}


void MainWindow::on_play_clicked()
{
    ui->stackedWidget->setCurrentIndex(Selection_Page);
}


void MainWindow::on_history_clicked()
{
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
    ui->stackedWidget->setCurrentIndex(History_Page);
}


void MainWindow::on_logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(LogIn_Page);
}

void setEnableArray(char value) {
    for (int i = 0; i < 9; ++i) {
        EnableARRAY[i] = value;
    }
}


void MainWindow::on_XOback_clicked()
{   currentgame.clear();
    setEnableArray(1);
    EnableBoard();
    clearButtonText();
    ui->stackedWidget->setCurrentIndex(Selection_Page);
}


void MainWindow::on_testb_clicked()
{
    ui->gamestatelabel->setText(currentgame.getPlayer1name()+"'s turn");
    currentgame.clear();
    setEnableArray(1);
    EnableBoard();
    clearButtonText();
    ui->stackedWidget->setCurrentIndex(Game_Page);
}


void MainWindow::on_XOreset_clicked()
{
    ui->gamestatelabel->setText(currentgame.getPlayer1name()+"'s turn");
    currentgame.clear();
    setEnableArray(1);
    EnableBoard();
    clearButtonText();
}


void MainWindow::on_player2b_clicked()
{
    ui->Player2_lineedit->clear();
    ui->stackedWidget->setCurrentIndex(Player2_Page);
}


void MainWindow::on_pushButton_SignUp_2_clicked()
{
   QString P2name = ui->Player2_lineedit->text();
    if (P2name.isEmpty()){
       QMessageBox::critical(this, "Error", "No Name entered");
        return;
   }
    currentgame.clear();
    currentgame.setMode(3);
    currentgame.setPlayer2name(P2name);
   ui->gamestatelabel->setText(currentgame.getPlayer1name()+"'s turn");
   ui->stackedWidget->setCurrentIndex(Player1_Page);
}


void MainWindow::on_CPUb_clicked()
{
    currentgame.clear();
    currentgame.setMode(1);
    currentgame.setPlayer2name("CPU");
    ui->gamestatelabel->setText(currentgame.getPlayer1name()+"'s turn");
    ui->stackedWidget->setCurrentIndex(Player1_Page);
}


void MainWindow::on_AIb_clicked()
{
    currentgame.clear();
    currentgame.setMode(2);
    currentgame.setPlayer2name("AI");
    ui->gamestatelabel->setText(currentgame.getPlayer1name()+"'s turn");
    ui->stackedWidget->setCurrentIndex(Player1_Page);
}


void MainWindow::on_Player2_backb_clicked()
{
    ui->stackedWidget->setCurrentIndex(Selection_Page);
}


void MainWindow::on_Selection_backb_clicked()
{   if(saveflage){
    ui->stackedWidget->setCurrentIndex(Main_Page);
    }
    else{
    ui->stackedWidget->setCurrentIndex(LogIn_Page);
    }
}


void MainWindow::on_Ob_clicked()
{
    currentgame.setPlayer1Symbol("O");
    ui->stackedWidget->setCurrentIndex(Game_Page);
}


void MainWindow::on_Xb_clicked()
{
    currentgame.setPlayer1Symbol("X");
    ui->stackedWidget->setCurrentIndex(Game_Page);
}

void MainWindow::on_Player1_backb_clicked()
{
    ui->stackedWidget->setCurrentIndex(Selection_Page);
}


//to avoid error
void MainWindow::on_Player2_lineedit_cursorPositionChanged(int arg1, int arg2)
{

}


//SQL

