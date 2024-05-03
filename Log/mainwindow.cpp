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
    else if(username == "test") //ggg
    {
        QMessageBox::warning(this, "LogIn", "wrong password");
    }
    else
    {
        QMessageBox::warning(this, "LogIn", "Invalid user");
    }
}

/////ffnndsjghshgsjh

void MainWindow::on_pushButton_SignUp_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_2_clicked()
{

}


void MainWindow::on_pushButton_12_clicked()
{
    //hello
}

