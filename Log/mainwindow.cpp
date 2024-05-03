#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "StackIbdex.h"
#include "gameboard.h"
#include <QMessageBox>

GameBoard currentgame;
char EnableARRAY[9]={1,1,1,1,1,1,1,1,1};
int gamestate=0;
QColor textColor;


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

        ui->stackedWidget->setCurrentIndex(2);

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
    ui->stackedWidget->setCurrentIndex(1);
}



void MainWindow::on_pushButton_SignUp_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
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
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
        QMessageBox::warning(this, "SignUp", "password doesn't match");
    return;
}

void MainWindow::on_XO1_clicked()
{
    // Disable the button
    EnableARRAY[0]=0;
    DisableBoard();
    currentgame.playAtPosition(0,0);
    // Set the text on the button
    ui->XO1->setText(currentgame.getCellValue(0,0));
    if(currentgame.getMoveNum()%2==0){
    ui->XO1->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                           "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO1->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }


}

void MainWindow::on_XO2_clicked()
{
    // Disable the button
    EnableARRAY[1]=0;
    DisableBoard();
    currentgame.playAtPosition(0,1);
    // Set the text on the button
    ui->XO2->setText(currentgame.getCellValue(0,1));
    if(currentgame.getMoveNum()%2==0){
        ui->XO2->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO2->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}

void MainWindow::on_XO3_clicked()
{
    // Disable the button
    EnableARRAY[2]=0;
    DisableBoard();
    currentgame.playAtPosition(0,2);
    // Set the text on the button
    ui->XO3->setText(currentgame.getCellValue(0,2));
    if(currentgame.getMoveNum()%2==0){
        ui->XO3->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO3->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}

void MainWindow::on_XO4_clicked()
{
    // Disable the button
    EnableARRAY[3]=0;
    DisableBoard();
    currentgame.playAtPosition(1,0);
    // Set the text on the button
    ui->XO4->setText(currentgame.getCellValue(1,0));
    if(currentgame.getMoveNum()%2==0){
        ui->XO4->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO4->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}

void MainWindow::on_XO5_clicked()
{
    // Disable the button
    EnableARRAY[4]=0;
    DisableBoard();
    currentgame.playAtPosition(1,1);
    // Set the text on the button
    ui->XO5->setText(currentgame.getCellValue(1,1));
    if(currentgame.getMoveNum()%2==0){
        ui->XO5->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO5->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}

void MainWindow::on_XO6_clicked()
{
    // Disable the button
    EnableARRAY[5]=0;
    DisableBoard();
    currentgame.playAtPosition(1,2);
    // Set the text on the button
    ui->XO6->setText(currentgame.getCellValue(1,2));
    if(currentgame.getMoveNum()%2==0){
        ui->XO6->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO6->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}



void MainWindow::on_XO7_clicked()
{
    // Disable the button
    EnableARRAY[6]=0;
    DisableBoard();
    currentgame.playAtPosition(2,0);
    // Set the text on the button
    ui->XO7->setText(currentgame.getCellValue(2,0));
    if(currentgame.getMoveNum()%2==0){
        ui->XO7->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO7->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}


void MainWindow::on_XO8_clicked()
{
    // Disable the button
    EnableARRAY[7]=0;
    DisableBoard();
    currentgame.playAtPosition(2,1);
    // Set the text on the button
    ui->XO8->setText(currentgame.getCellValue(2,1));
    if(currentgame.getMoveNum()%2==0){
        ui->XO8->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO8->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}


void MainWindow::on_XO9_clicked()
{
    // Disable the button
    EnableARRAY[8]=0;
    DisableBoard();
    currentgame.playAtPosition(2,2);
    // Set the text on the button
    ui->XO9->setText(currentgame.getCellValue(2,2));
    if(currentgame.getMoveNum()%2==0){
        ui->XO9->setStyleSheet("font-size: 60px; font-weight: bold; color: blue;"
                               "background-color: rgb(128, 128, 128);");
    }
    else{
        ui->XO9->setStyleSheet("font-size: 60px; font-weight: bold; color: yellow;"
                               "background-color: rgb(128, 128, 128);");
    }
    CheckEnableBoard();
    gamestate=currentgame.checkboard();
    switch (gamestate) {
    case 0:

        break;
    case 1:
        QMessageBox::warning(this, "Win", "game Ended");
        DisableBoard();
        break;
    case -1:
        QMessageBox::warning(this, "Lose", "game Ended");
        DisableBoard();
        break;
    case 2:
        QMessageBox::warning(this, "Draw", "game Ended");
        DisableBoard();
        break;

    default:
        QMessageBox::warning(this, "Error", "something went wrong");
        break;
    }
}


void MainWindow::DisableBoard(){
    ui->XO1->setEnabled(false);
    // Get the current palette of the button
    //palette = ui->XO1->palette();

    // Retrieve the current text color from the palette
    textColor = (ui->XO1->palette()).color(QPalette::ButtonText);

    // Set the new style with the current text color
    ui->XO1->setStyleSheet("font-size: 60px; font-weight: bold; "
                           "color: " + textColor.name() + ";"
                           "background-color: rgb(128, 128, 128)");
    ui->XO2->setEnabled(false);
    // Get the current palette of the button
    //palette = ui->XO2->palette();

    // Retrieve the current text color from the palette
    textColor = (ui->XO2->palette()).color(QPalette::ButtonText);

    // Set the new style with the current text color
    ui->XO2->setStyleSheet("font-size: 60px; font-weight: bold; "
                           "color: " + textColor.name() + ";"
                           "background-color: rgb(128, 128, 128)");
    ui->XO3->setEnabled(false);
    ui->XO4->setEnabled(false);
    ui->XO5->setEnabled(false);
    ui->XO6->setEnabled(false);
    ui->XO7->setEnabled(false);
    ui->XO8->setEnabled(false);
    ui->XO9->setEnabled(false);
}

void MainWindow::EnableBoard(){
    ui->XO1->setEnabled(true);
    ui->XO1->setStyleSheet("font-size: 60px; font-weight: bold;"
                           "background-color: rgb(220, 40, 16)");
    ui->XO2->setEnabled(true);
    ui->XO2->setStyleSheet("font-size: 60px; font-weight: bold;"
                           "background-color: rgb(220, 40, 16)");
    ui->XO3->setEnabled(true);
    ui->XO4->setEnabled(true);
    ui->XO5->setEnabled(true);
    ui->XO6->setEnabled(true);
    ui->XO7->setEnabled(true);
    ui->XO8->setEnabled(true);
    ui->XO9->setEnabled(true);
}

void MainWindow::CheckEnableBoard(){
    if(EnableARRAY[0]==1){
        // Get the current palette of the button
        //palette = ui->XO1->palette();

        // Retrieve the current text color from the palette
        textColor = (ui->XO1->palette()).color(QPalette::ButtonText);

        // Set the new style with the current text color
        ui->XO1->setStyleSheet("font-size: 60px; font-weight: bold; "
                               "color: " + textColor.name() + ";"
                                                    "background-color: rgb(220, 40, 16)");

         ui->XO1->setEnabled(true);
    }
    if(EnableARRAY[1]==1){
        // Get the current palette of the button
        //palette = ui->XO2->palette();

        // Retrieve the current text color from the palette
        textColor = (ui->XO2->palette()).color(QPalette::ButtonText);

        // Set the new style with the current text color
        ui->XO2->setStyleSheet("font-size: 60px; font-weight: bold; "
                               "color: " + textColor.name() + ";"
                                                    "background-color: rgb(220, 40, 16)");

        ui->XO2->setEnabled(true);
    }
    if(EnableARRAY[2]==1){
        ui->XO3->setEnabled(true);
    }
    if(EnableARRAY[3]==1){
        ui->XO4->setEnabled(true);
    }
    if(EnableARRAY[4]==1){
        ui->XO5->setEnabled(true);
    }
    if(EnableARRAY[5]==1){
        ui->XO6->setEnabled(true);
    }
    if(EnableARRAY[6]==1){
        ui->XO7->setEnabled(true);
    }
    if(EnableARRAY[7]==1){
        ui->XO8->setEnabled(true);
    }
    if(EnableARRAY[8]==1){
        ui->XO9->setEnabled(true);
    }
}



void MainWindow::on_play_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_history_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


