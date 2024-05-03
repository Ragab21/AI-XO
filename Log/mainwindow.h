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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
