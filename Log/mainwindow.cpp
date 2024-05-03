#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "StackIbdex.h"
#include "gameboard.h"
#include <QMessageBox>

GameBoard currentgame;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    ui->stackedWidget->setCurrentIndex(6);
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
    ui->XO1->setEnabled(false);
    currentgame.playAtPosition(0,0);
    // Set the text on the button
    ui->XO1->setText(currentgame.getCellValue(0,0));
    ui->XO1->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}

void MainWindow::on_XO2_clicked()
{
    // Disable the button
    ui->XO2->setEnabled(false);
    currentgame.playAtPosition(0,1);
    // Set the text on the button
    ui->XO2->setText(currentgame.getCellValue(0,1));
    ui->XO2->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}

void MainWindow::on_XO3_clicked()
{
    // Disable the button
    ui->XO3->setEnabled(false);
    currentgame.playAtPosition(0,2);
    // Set the text on the button
    ui->XO3->setText(currentgame.getCellValue(0,2));
    ui->XO3->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}

void MainWindow::on_XO4_clicked()
{
    // Disable the button
    ui->XO4->setEnabled(false);
    currentgame.playAtPosition(1,0);
    // Set the text on the button
    ui->XO4->setText(currentgame.getCellValue(1,0));
    ui->XO4->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}

void MainWindow::on_XO5_clicked()
{
    // Disable the button
    ui->XO5->setEnabled(false);
    currentgame.playAtPosition(1,1);
    // Set the text on the button
    ui->XO5->setText(currentgame.getCellValue(1,1));
    ui->XO5->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}

void MainWindow::on_XO6_clicked()
{
    // Disable the button
    ui->XO6->setEnabled(false);
    currentgame.playAtPosition(1,2);
    // Set the text on the button
    ui->XO6->setText(currentgame.getCellValue(1,2));
    ui->XO6->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}


void MainWindow::on_XO7_clicked()
{
    // Disable the button
    ui->XO7->setEnabled(false);
    currentgame.playAtPosition(2,0);
    // Set the text on the button
    ui->XO7->setText(currentgame.getCellValue(2,0));
    ui->XO7->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}


void MainWindow::on_XO8_clicked()
{
    // Disable the button
    ui->XO8->setEnabled(false);
    currentgame.playAtPosition(2,1);
    // Set the text on the button
    ui->XO8->setText(currentgame.getCellValue(2,1));
    ui->XO8->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}


void MainWindow::on_XO9_clicked()
{
    // Disable the button
    ui->XO9->setEnabled(false);
    currentgame.playAtPosition(2,2);
    // Set the text on the button
    ui->XO9->setText(currentgame.getCellValue(2,2));
    ui->XO9->setStyleSheet("font-size: 60px; font-weight: bold; color: red;");
}









