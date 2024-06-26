#include "mainwindow.h"
#include "gameboard.h"
#include <QApplication>
#include <QCoreApplication>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}




//
