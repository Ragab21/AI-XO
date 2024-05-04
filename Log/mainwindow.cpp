#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "StackIbdex.h"
#include "gameboard.h"
#include <QMessageBox>

GameBoard currentgame;
char EnableARRAY[9]={1,1,1,1,1,1,1,1,1};
const QColor Enable_COLOR(220, 40, 16);
const QColor Disable_COLOR(128, 128, 128);
const QColor Win_COLOR(220, 255, 200);
QString player1name = "You"; // Example player name
QString player2name = "CPU"; // Example player name

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


    ui->stackedWidget->setCurrentIndex(Game_Page);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_LogIn_clicked()
{

    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();
    if(username == "test" && password == "test")
    {

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



void MainWindow::on_pushButton_SignUp_clicked()
{
    ui->stackedWidget->setCurrentIndex(SignUp_Page);
}



void MainWindow::on_pushButton_SignUp_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(LogIn_Page);
}


void MainWindow::on_pushButton_SignUp_LogIn_clicked()
{
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


}

void MainWindow::on_XO2_clicked()
{
    updateButton(1);
    CheckEnableBoard();
    checkgamestate();
}

void MainWindow::on_XO3_clicked()
{
    updateButton(2);
    CheckEnableBoard();
    checkgamestate();
}

void MainWindow::on_XO4_clicked()
{
    updateButton(3);
    CheckEnableBoard();
    checkgamestate();
}

void MainWindow::on_XO5_clicked()
{
    updateButton(4);
    CheckEnableBoard();
    checkgamestate();
}

void MainWindow::on_XO6_clicked()
{
    updateButton(5);
    CheckEnableBoard();
    checkgamestate();
}



void MainWindow::on_XO7_clicked()
{
    updateButton(6);
    CheckEnableBoard();
    checkgamestate();
}


void MainWindow::on_XO8_clicked()
{
    updateButton(7);
    CheckEnableBoard();
    checkgamestate();
}


void MainWindow::on_XO9_clicked()
{
    updateButton(8);
    CheckEnableBoard();
    checkgamestate();
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
        ui->gamestatelabel->setText(player1name+"'s turn");
    }
    else{
        textColor = "yellow";
        ui->gamestatelabel->setText(player2name+"'s turn");
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


void MainWindow::checkgamestate(){
    int gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:
        //continuou
        break;
    case 1:
        ui->gamestatelabel->setText(player1name+" Win");
        DisableBoard();
        ColorBoard(currentgame.getwincode());
        break;
    case -1:
        ui->gamestatelabel->setText(player2name+" Win");
        DisableBoard();
        ColorBoard(currentgame.getwincode());
        break;
    case 2:
        ui->gamestatelabel->setText("It's a Tie");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }

}

/*
// Check rows, columns, and diagonals for a win
for (int i = 0; i < 3; ++i) {
    if (m_board[i][0] == symbol && m_board[i][1] == symbol && m_board[i][2] == symbol) {
        wincode=i*10+4;
        return true; // Check rows
    }
    if (m_board[0][i] == symbol && m_board[1][i] == symbol && m_board[2][i] == symbol) {
        wincode=i+40;
        return true; // Check columns
    }
}
// Check diagonals
if (m_board[0][0] == symbol && m_board[1][1] == symbol && m_board[2][2] == symbol) {
    wincode=110;
    return true;
}
if(m_board[0][2] == symbol && m_board[1][1] == symbol && m_board[2][0] == symbol){
    wincode=101;
    return true;
}
*/

void MainWindow::on_play_clicked()
{
    ui->stackedWidget->setCurrentIndex(Selection_Page);
}


void MainWindow::on_history_clicked()
{
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
    ui->gamestatelabel->setText(player1name+"'s turn");
    currentgame.clear();
    setEnableArray(1);
    EnableBoard();
    clearButtonText();
    ui->stackedWidget->setCurrentIndex(Game_Page);
}


void MainWindow::on_XOreset_clicked()
{
    ui->gamestatelabel->setText(player1name+"'s turn");
    currentgame.clear();
    setEnableArray(1);
    EnableBoard();
    clearButtonText();
}

