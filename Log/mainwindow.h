#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_LogIn_clicked();

    void on_pushButton_SignUp_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_SignUp_Back_clicked();

    void on_pushButton_SignUp_LogIn_clicked();

    void on_XO2_clicked();

    void on_XO3_clicked();

    void on_XO6_clicked();

    void on_XO8_clicked();

    void on_X01_clicked();

    void on_XO4_clicked();

    void on_XO5_clicked();

    void on_XO7_clicked();

    void on_XO9_clicked();

    void on_XO1_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
