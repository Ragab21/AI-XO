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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *LogIn_Page;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Username;
    QLineEdit *lineEdit_Username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QPushButton *pushButton_LogIn;
    QPushButton *pushButton_SignUp;
    QSpacerItem *verticalSpacer_2;
    QWidget *SignUp_Page;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_ConfirmPassword;
    QLabel *label_ConfirmPassword;
    QLabel *label_Username1;
    QLineEdit *lineEdit_Password1;
    QLineEdit *lineEdit_Username1;
    QLabel *label_Password1;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_SignUp_LogIn;
    QPushButton *pushButton_SignUp_Back;
    QSpacerItem *horizontalSpacer_3;
    QWidget *Main_Page;
    QWidget *History_Page;
    QPushButton *pushButton;
    QPushButton *pushButton_11;
    QWidget *Selection_Page;
    QWidget *Game_Page;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_4;
    QPushButton *XO1;
    QPushButton *XO2;
    QPushButton *XO3;
    QPushButton *XO4;
    QPushButton *XO5;
    QPushButton *XO6;
    QPushButton *XO7;
    QPushButton *XO8;
    QPushButton *XO9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 604);
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
        verticalLayout_4 = new QVBoxLayout(LogIn_Page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox = new QGroupBox(LogIn_Page);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 155, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_Username = new QLabel(groupBox);
        label_Username->setObjectName("label_Username");

        horizontalLayout->addWidget(label_Username);

        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName("lineEdit_Username");

        horizontalLayout->addWidget(lineEdit_Username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_Password = new QLabel(groupBox);
        label_Password->setObjectName("label_Password");

        horizontalLayout_2->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        pushButton_LogIn = new QPushButton(groupBox);
        pushButton_LogIn->setObjectName("pushButton_LogIn");

        gridLayout_2->addWidget(pushButton_LogIn, 1, 0, 1, 1);

        pushButton_SignUp = new QPushButton(groupBox);
        pushButton_SignUp->setObjectName("pushButton_SignUp");

        gridLayout_2->addWidget(pushButton_SignUp, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 154, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(groupBox);

        stackedWidget->addWidget(LogIn_Page);
        SignUp_Page = new QWidget();
        SignUp_Page->setObjectName("SignUp_Page");
        verticalLayout_5 = new QVBoxLayout(SignUp_Page);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_2 = new QGroupBox(SignUp_Page);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        lineEdit_ConfirmPassword = new QLineEdit(groupBox_2);
        lineEdit_ConfirmPassword->setObjectName("lineEdit_ConfirmPassword");
        lineEdit_ConfirmPassword->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(lineEdit_ConfirmPassword, 2, 2, 1, 1);

        label_ConfirmPassword = new QLabel(groupBox_2);
        label_ConfirmPassword->setObjectName("label_ConfirmPassword");

        gridLayout_3->addWidget(label_ConfirmPassword, 2, 0, 1, 2);

        label_Username1 = new QLabel(groupBox_2);
        label_Username1->setObjectName("label_Username1");

        gridLayout_3->addWidget(label_Username1, 0, 0, 1, 2);

        lineEdit_Password1 = new QLineEdit(groupBox_2);
        lineEdit_Password1->setObjectName("lineEdit_Password1");
        lineEdit_Password1->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(lineEdit_Password1, 1, 2, 1, 1);

        lineEdit_Username1 = new QLineEdit(groupBox_2);
        lineEdit_Username1->setObjectName("lineEdit_Username1");

        gridLayout_3->addWidget(lineEdit_Username1, 0, 2, 1, 1);

        label_Password1 = new QLabel(groupBox_2);
        label_Password1->setObjectName("label_Password1");

        gridLayout_3->addWidget(label_Password1, 1, 0, 1, 2);


        verticalLayout_6->addLayout(gridLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_SignUp_LogIn = new QPushButton(groupBox_2);
        pushButton_SignUp_LogIn->setObjectName("pushButton_SignUp_LogIn");

        horizontalLayout_3->addWidget(pushButton_SignUp_LogIn);

        pushButton_SignUp_Back = new QPushButton(groupBox_2);
        pushButton_SignUp_Back->setObjectName("pushButton_SignUp_Back");

        horizontalLayout_3->addWidget(pushButton_SignUp_Back);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_5->addWidget(groupBox_2);

        stackedWidget->addWidget(SignUp_Page);
        Main_Page = new QWidget();
        Main_Page->setObjectName("Main_Page");
        stackedWidget->addWidget(Main_Page);
        History_Page = new QWidget();
        History_Page->setObjectName("History_Page");
        pushButton = new QPushButton(History_Page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 140, 83, 29));
        pushButton_11 = new QPushButton(History_Page);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(450, 370, 83, 29));
        stackedWidget->addWidget(History_Page);
        Selection_Page = new QWidget();
        Selection_Page->setObjectName("Selection_Page");
        stackedWidget->addWidget(Selection_Page);
        Game_Page = new QWidget();
        Game_Page->setObjectName("Game_Page");
        verticalLayout_8 = new QVBoxLayout(Game_Page);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_3 = new QGroupBox(Game_Page);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        XO1 = new QPushButton(groupBox_3);
        XO1->setObjectName("XO1");
        sizePolicy.setHeightForWidth(XO1->sizePolicy().hasHeightForWidth());
        XO1->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO1, 0, 0, 1, 1);

        XO2 = new QPushButton(groupBox_3);
        XO2->setObjectName("XO2");
        sizePolicy.setHeightForWidth(XO2->sizePolicy().hasHeightForWidth());
        XO2->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO2, 0, 1, 1, 1);

        XO3 = new QPushButton(groupBox_3);
        XO3->setObjectName("XO3");
        sizePolicy.setHeightForWidth(XO3->sizePolicy().hasHeightForWidth());
        XO3->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO3, 0, 2, 1, 1);

        XO4 = new QPushButton(groupBox_3);
        XO4->setObjectName("XO4");
        sizePolicy.setHeightForWidth(XO4->sizePolicy().hasHeightForWidth());
        XO4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO4, 1, 0, 1, 1);

        XO5 = new QPushButton(groupBox_3);
        XO5->setObjectName("XO5");
        sizePolicy.setHeightForWidth(XO5->sizePolicy().hasHeightForWidth());
        XO5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO5, 1, 1, 1, 1);

        XO6 = new QPushButton(groupBox_3);
        XO6->setObjectName("XO6");
        sizePolicy.setHeightForWidth(XO6->sizePolicy().hasHeightForWidth());
        XO6->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO6, 1, 2, 1, 1);

        XO7 = new QPushButton(groupBox_3);
        XO7->setObjectName("XO7");
        sizePolicy.setHeightForWidth(XO7->sizePolicy().hasHeightForWidth());
        XO7->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO7, 2, 0, 1, 1);

        XO8 = new QPushButton(groupBox_3);
        XO8->setObjectName("XO8");
        sizePolicy.setHeightForWidth(XO8->sizePolicy().hasHeightForWidth());
        XO8->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO8, 2, 1, 1, 1);

        XO9 = new QPushButton(groupBox_3);
        XO9->setObjectName("XO9");
        sizePolicy.setHeightForWidth(XO9->sizePolicy().hasHeightForWidth());
        XO9->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(XO9, 2, 2, 1, 1);


        verticalLayout_9->addLayout(gridLayout_4);


        verticalLayout_8->addWidget(groupBox_3);

        stackedWidget->addWidget(Game_Page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_Password, pushButton_LogIn);
        QWidget::setTabOrder(pushButton_LogIn, pushButton_SignUp);
        QWidget::setTabOrder(pushButton_SignUp, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_11);
        QWidget::setTabOrder(pushButton_11, lineEdit_Username);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        label_Username->setText(QCoreApplication::translate("MainWindow", "Username:  ", nullptr));
        label_Password->setText(QCoreApplication::translate("MainWindow", "Password:   ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " Don't have an account", nullptr));
        pushButton_LogIn->setText(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        label_ConfirmPassword->setText(QCoreApplication::translate("MainWindow", "Confirm Password:", nullptr));
        label_Username1->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_Password1->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pushButton_SignUp_LogIn->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        pushButton_SignUp_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        XO1->setText(QString());
        XO2->setText(QString());
        XO3->setText(QString());
        XO4->setText(QString());
        XO5->setText(QString());
        XO6->setText(QString());
        XO7->setText(QString());
        XO8->setText(QString());
        XO9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
