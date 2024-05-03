#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    if(password == confirm_password)
    {
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
        QMessageBox::warning(this, "SignUp", "password doesn't match");
}

