#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

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
    QPushButton *XObuttons[9];

private slots:
    void updateButton(int index);
    void enableButton(int index);
    void disableButton(int index);
    void checkgamestate();
    void EnableBoard();
    void CheckEnableBoard();
    void DisableBoard();
    void clearButtonText();

    void on_pushButton_LogIn_clicked();

    void on_pushButton_SignUp_clicked();

    void on_pushButton_SignUp_Back_clicked();

    void on_pushButton_SignUp_LogIn_clicked();

    void on_XO2_clicked();

    void on_XO3_clicked();

    void on_XO6_clicked();


    void on_XO8_clicked();


    void on_XO4_clicked();

    void on_XO5_clicked();

    void on_XO7_clicked();

    void on_XO9_clicked();

    void on_XO1_clicked();

    void on_play_clicked();

    void on_history_clicked();

    void on_logout_clicked();


    void on_XOback_clicked();

    void on_testb_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
