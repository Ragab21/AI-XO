#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QCoreApplication>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;

    void connClose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);

    }
    bool connOpen()
    {


        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/project/AI-XO/copy/AI-XO/Log/test.db");

        if (!db.open()) {
            qDebug() << "Error: Unable to connect to database!";
            return false;
        }
        return true;
    }




public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPushButton *XObuttons[9];

private slots:
    void updateButton(int index);
    void colorButton(int index);
    void enableButton(int index);
    void disableButton(int index);
    void checkgamestate();
    void EnableBoard();
    void ColorBoard(int wincode);
    void CheckEnableBoard();
    void DisableBoard();
    void clearButtonText();
    void checkCPU();

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

    void on_XOreset_clicked();

    void on_player2b_clicked();

    void on_Player2_lineedit_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_SignUp_2_clicked();

    void on_CPUb_clicked();

    void on_AIb_clicked();

    void on_Player2_backb_clicked();

    void on_Selection_backb_clicked();

    void on_Ob_clicked();

    void on_Xb_clicked();

    void on_Player1_backb_clicked();

    void on_Defaultb_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
