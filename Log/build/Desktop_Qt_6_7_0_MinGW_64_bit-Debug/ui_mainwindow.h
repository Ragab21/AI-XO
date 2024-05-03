/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *LogIn_Page;
    QWidget *SignUp_Page;
    QPushButton *pushButton_2;
    QWidget *Main_Page;
    QWidget *History_Page;
    QWidget *Selection_Page;
    QWidget *Game_Page;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        LogIn_Page = new QWidget();
        LogIn_Page->setObjectName("LogIn_Page");
        stackedWidget->addWidget(LogIn_Page);
        SignUp_Page = new QWidget();
        SignUp_Page->setObjectName("SignUp_Page");
        pushButton_2 = new QPushButton(SignUp_Page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(350, 200, 93, 29));
        stackedWidget->addWidget(SignUp_Page);
        Main_Page = new QWidget();
        Main_Page->setObjectName("Main_Page");
        stackedWidget->addWidget(Main_Page);
        History_Page = new QWidget();
        History_Page->setObjectName("History_Page");
        stackedWidget->addWidget(History_Page);
        Selection_Page = new QWidget();
        Selection_Page->setObjectName("Selection_Page");
        stackedWidget->addWidget(Selection_Page);
        Game_Page = new QWidget();
        Game_Page->setObjectName("Game_Page");
        pushButton_3 = new QPushButton(Game_Page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(881, 101, 83, 29));
        pushButton_4 = new QPushButton(Game_Page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(250, 140, 83, 29));
        pushButton_5 = new QPushButton(Game_Page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(791, 101, 83, 29));
        pushButton_6 = new QPushButton(Game_Page);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(431, 101, 83, 29));
        pushButton_7 = new QPushButton(Game_Page);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(701, 101, 83, 29));
        pushButton_8 = new QPushButton(Game_Page);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(611, 101, 83, 29));
        pushButton_9 = new QPushButton(Game_Page);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(251, 101, 83, 29));
        pushButton_10 = new QPushButton(Game_Page);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(341, 101, 83, 29));
        stackedWidget->addWidget(Game_Page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
