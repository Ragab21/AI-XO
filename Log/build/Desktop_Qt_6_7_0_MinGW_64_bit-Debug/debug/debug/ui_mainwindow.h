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
#include <QtWidgets/QFormLayout>
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
    QFormLayout *formLayout;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_LogIn;
    QLabel *label_Username;
    QLineEdit *lineEdit_Password;
    QLabel *label_Password;
    QLineEdit *lineEdit_Username;
    QSpacerItem *verticalSpacer_12;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_SignUp;
    QPushButton *Defaultb;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QWidget *SignUp_Page;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_Password1;
    QLabel *label_Password1;
    QLineEdit *lineEdit_Username1;
    QLabel *label;
    QLabel *label_Username1;
    QLineEdit *lineEdit_ConfirmPassword;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_SignUp_LogIn;
    QPushButton *pushButton_SignUp_Back;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer_9;
    QWidget *Player1_Page;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_12;
    QPushButton *Xb;
    QPushButton *Ob;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Player1_backb;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_15;
    QWidget *Main_Page;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_5;
    QPushButton *play;
    QPushButton *history;
    QPushButton *logout;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QWidget *History_Page;
    QPushButton *Historybackb;
    QPushButton *historybext;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_7;
    QPushButton *XO7_h;
    QPushButton *XO5_h;
    QPushButton *XO8_h;
    QPushButton *XO3_h;
    QPushButton *XO4_h;
    QPushButton *XO2_h;
    QPushButton *XO9_h;
    QPushButton *XO6_h;
    QPushButton *XO1_h;
    QLabel *label_Username_2;
    QLabel *Datelabel;
    QLabel *Vslabel;
    QLabel *label_Username_3;
    QLabel *Gamestatelabel;
    QPushButton *historyPrev;
    QWidget *Selection_Page;
    QGridLayout *gridLayout_5;
    QPushButton *Selection_backb;
    QPushButton *player2b;
    QPushButton *AIb;
    QPushButton *CPUb;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer;
    QWidget *Player2_Page;
    QFormLayout *formLayout_2;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_17;
    QPushButton *Player2_backb;
    QLineEdit *Player2_lineedit;
    QPushButton *pushButton_SignUp_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_18;
    QSpacerItem *verticalSpacer_16;
    QWidget *Game_Page;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_91;
    QLabel *gamestatelabel;
    QGridLayout *gridLayout_4;
    QPushButton *XO7;
    QPushButton *XO5;
    QPushButton *XO8;
    QPushButton *XO3;
    QPushButton *XO4;
    QPushButton *XO2;
    QPushButton *XO9;
    QPushButton *XO6;
    QPushButton *XO1;
    QGroupBox *XObackbox;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *XOreset;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *XOback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 739);
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
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        LogIn_Page = new QWidget();
        LogIn_Page->setObjectName("LogIn_Page");
        verticalLayout_4 = new QVBoxLayout(LogIn_Page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox = new QGroupBox(LogIn_Page);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_LogIn = new QPushButton(groupBox);
        pushButton_LogIn->setObjectName("pushButton_LogIn");
        pushButton_LogIn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        gridLayout_2->addWidget(pushButton_LogIn, 4, 0, 1, 1);

        label_Username = new QLabel(groupBox);
        label_Username->setObjectName("label_Username");
        label_Username->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));
        label_Username->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Username, 0, 0, 1, 1, Qt::AlignLeft);

        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border: none;\n"
"border-bottom: 2px solid rgb(220, 40, 16);\n"
"color: #fff;\n"
"background-color: rgba(220, 40, 16, 0.1);\n"
"margin-bottom: 5px"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_Password, 3, 0, 1, 1);

        label_Password = new QLabel(groupBox);
        label_Password->setObjectName("label_Password");
        label_Password->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));
        label_Password->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Password, 2, 0, 1, 1, Qt::AlignLeft);

        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName("lineEdit_Username");
        lineEdit_Username->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border: none;\n"
"border-bottom: 2px solid rgb(220, 40, 16);\n"
"color: #fff;\n"
"background-color: rgba(220, 40, 16, 0.1);\n"
"margin-bottom: 5px"));

        gridLayout_2->addWidget(lineEdit_Username, 1, 0, 1, 2);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_12, 5, 0, 1, 1);


        formLayout->setLayout(1, QFormLayout::SpanningRole, gridLayout_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        pushButton_SignUp = new QPushButton(groupBox);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        pushButton_SignUp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        gridLayout_6->addWidget(pushButton_SignUp, 0, 0, 1, 1);

        Defaultb = new QPushButton(groupBox);
        Defaultb->setObjectName("Defaultb");
        Defaultb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        gridLayout_6->addWidget(Defaultb, 1, 0, 1, 1);


        formLayout->setLayout(2, QFormLayout::FieldRole, gridLayout_6);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_11);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_10);


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
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        lineEdit_Password1 = new QLineEdit(groupBox_2);
        lineEdit_Password1->setObjectName("lineEdit_Password1");
        lineEdit_Password1->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border: none;\n"
"border-bottom: 2px solid rgb(220, 40, 16);\n"
"color: #fff;\n"
"background-color: rgba(220, 40, 16, 0.1);\n"
"margin-bottom: 5px"));
        lineEdit_Password1->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(lineEdit_Password1, 4, 0, 1, 3);

        label_Password1 = new QLabel(groupBox_2);
        label_Password1->setObjectName("label_Password1");
        label_Password1->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));
        label_Password1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_Password1, 3, 0, 1, 2, Qt::AlignLeft);

        lineEdit_Username1 = new QLineEdit(groupBox_2);
        lineEdit_Username1->setObjectName("lineEdit_Username1");
        lineEdit_Username1->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border: none;\n"
"border-bottom: 2px solid rgb(220, 40, 16);\n"
"color: #fff;\n"
"background-color: rgba(220, 40, 16, 0.1);\n"
"margin-bottom: 5px"));

        gridLayout_3->addWidget(lineEdit_Username1, 2, 0, 1, 3);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));

        gridLayout_3->addWidget(label, 5, 0, 1, 2, Qt::AlignLeft);

        label_Username1 = new QLabel(groupBox_2);
        label_Username1->setObjectName("label_Username1");
        label_Username1->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));
        label_Username1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_Username1, 1, 0, 1, 1, Qt::AlignLeft);

        lineEdit_ConfirmPassword = new QLineEdit(groupBox_2);
        lineEdit_ConfirmPassword->setObjectName("lineEdit_ConfirmPassword");
        lineEdit_ConfirmPassword->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border: none;\n"
"border-bottom: 2px solid rgb(220, 40, 16);\n"
"color: #fff;\n"
"background-color: rgba(220, 40, 16, 0.1);\n"
"margin-bottom: 5px"));
        lineEdit_ConfirmPassword->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(lineEdit_ConfirmPassword, 6, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        pushButton_SignUp_LogIn = new QPushButton(groupBox_2);
        pushButton_SignUp_LogIn->setObjectName("pushButton_SignUp_LogIn");
        pushButton_SignUp_LogIn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        verticalLayout_6->addWidget(pushButton_SignUp_LogIn);

        pushButton_SignUp_Back = new QPushButton(groupBox_2);
        pushButton_SignUp_Back->setObjectName("pushButton_SignUp_Back");
        pushButton_SignUp_Back->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        verticalLayout_6->addWidget(pushButton_SignUp_Back);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);


        verticalLayout_5->addWidget(groupBox_2);

        stackedWidget->addWidget(SignUp_Page);
        Player1_Page = new QWidget();
        Player1_Page->setObjectName("Player1_Page");
        gridLayout_8 = new QGridLayout(Player1_Page);
        gridLayout_8->setObjectName("gridLayout_8");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 3, 4, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName("gridLayout_12");
        Xb = new QPushButton(Player1_Page);
        Xb->setObjectName("Xb");
        Xb->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 50px bold;\n"
"padding: 40px 55px;\n"
"margin-right: 20px;\n"
"border: 3px solid rgb(220, 40, 16);\n"
"border-radius: 10px"));

        gridLayout_12->addWidget(Xb, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        Ob = new QPushButton(Player1_Page);
        Ob->setObjectName("Ob");
        Ob->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 50px bold;\n"
"padding: 40px 52px;\n"
"margin-right: 20px;\n"
"border: 3px solid rgb(220, 40, 16);\n"
"border-radius: 10px"));

        gridLayout_12->addWidget(Ob, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_8->addLayout(gridLayout_12, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 1, 4, 1, 1);

        Player1_backb = new QPushButton(Player1_Page);
        Player1_backb->setObjectName("Player1_backb");
        Player1_backb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        gridLayout_8->addWidget(Player1_backb, 3, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_13, 0, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_14, 2, 1, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_15, 4, 1, 1, 1);

        stackedWidget->addWidget(Player1_Page);
        Main_Page = new QWidget();
        Main_Page->setObjectName("Main_Page");
        horizontalLayout_5 = new QHBoxLayout(Main_Page);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        play = new QPushButton(Main_Page);
        play->setObjectName("play");
        play->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        verticalLayout_9->addWidget(play);

        history = new QPushButton(Main_Page);
        history->setObjectName("history");
        history->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        verticalLayout_9->addWidget(history);

        logout = new QPushButton(Main_Page);
        logout->setObjectName("logout");
        logout->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #000;\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        verticalLayout_9->addWidget(logout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_4);

        stackedWidget->addWidget(Main_Page);
        History_Page = new QWidget();
        History_Page->setObjectName("History_Page");
        Historybackb = new QPushButton(History_Page);
        Historybackb->setObjectName("Historybackb");
        Historybackb->setGeometry(QRect(50, 600, 171, 41));
        Historybackb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 14pt \"My Puma\";"));
        historybext = new QPushButton(History_Page);
        historybext->setObjectName("historybext");
        historybext->setGeometry(QRect(570, 600, 171, 41));
        historybext->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 14pt \"My Puma\";"));
        layoutWidget = new QWidget(History_Page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(310, 200, 436, 232));
        gridLayout_7 = new QGridLayout(layoutWidget);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        XO7_h = new QPushButton(layoutWidget);
        XO7_h->setObjectName("XO7_h");
        sizePolicy.setHeightForWidth(XO7_h->sizePolicy().hasHeightForWidth());
        XO7_h->setSizePolicy(sizePolicy);
        XO7_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO7_h, 2, 0, 1, 1);

        XO5_h = new QPushButton(layoutWidget);
        XO5_h->setObjectName("XO5_h");
        sizePolicy.setHeightForWidth(XO5_h->sizePolicy().hasHeightForWidth());
        XO5_h->setSizePolicy(sizePolicy);
        XO5_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO5_h, 1, 1, 1, 1);

        XO8_h = new QPushButton(layoutWidget);
        XO8_h->setObjectName("XO8_h");
        sizePolicy.setHeightForWidth(XO8_h->sizePolicy().hasHeightForWidth());
        XO8_h->setSizePolicy(sizePolicy);
        XO8_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO8_h, 2, 1, 1, 1);

        XO3_h = new QPushButton(layoutWidget);
        XO3_h->setObjectName("XO3_h");
        sizePolicy.setHeightForWidth(XO3_h->sizePolicy().hasHeightForWidth());
        XO3_h->setSizePolicy(sizePolicy);
        XO3_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO3_h, 0, 2, 1, 1);

        XO4_h = new QPushButton(layoutWidget);
        XO4_h->setObjectName("XO4_h");
        sizePolicy.setHeightForWidth(XO4_h->sizePolicy().hasHeightForWidth());
        XO4_h->setSizePolicy(sizePolicy);
        XO4_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO4_h, 1, 0, 1, 1);

        XO2_h = new QPushButton(layoutWidget);
        XO2_h->setObjectName("XO2_h");
        sizePolicy.setHeightForWidth(XO2_h->sizePolicy().hasHeightForWidth());
        XO2_h->setSizePolicy(sizePolicy);
        XO2_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO2_h, 0, 1, 1, 1);

        XO9_h = new QPushButton(layoutWidget);
        XO9_h->setObjectName("XO9_h");
        sizePolicy.setHeightForWidth(XO9_h->sizePolicy().hasHeightForWidth());
        XO9_h->setSizePolicy(sizePolicy);
        XO9_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO9_h, 2, 2, 1, 1);

        XO6_h = new QPushButton(layoutWidget);
        XO6_h->setObjectName("XO6_h");
        sizePolicy.setHeightForWidth(XO6_h->sizePolicy().hasHeightForWidth());
        XO6_h->setSizePolicy(sizePolicy);
        XO6_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO6_h, 1, 2, 1, 1);

        XO1_h = new QPushButton(layoutWidget);
        XO1_h->setObjectName("XO1_h");
        sizePolicy.setHeightForWidth(XO1_h->sizePolicy().hasHeightForWidth());
        XO1_h->setSizePolicy(sizePolicy);
        XO1_h->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_7->addWidget(XO1_h, 0, 0, 1, 1);

        label_Username_2 = new QLabel(History_Page);
        label_Username_2->setObjectName("label_Username_2");
        label_Username_2->setGeometry(QRect(30, 50, 109, 24));
        label_Username_2->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));
        label_Username_2->setAlignment(Qt::AlignCenter);
        Datelabel = new QLabel(History_Page);
        Datelabel->setObjectName("Datelabel");
        Datelabel->setGeometry(QRect(170, 40, 311, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Datelabel->sizePolicy().hasHeightForWidth());
        Datelabel->setSizePolicy(sizePolicy1);
        Datelabel->setLayoutDirection(Qt::LeftToRight);
        Datelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"padding: 15px;\n"
"font: 14pt \"My Puma\";"));
        Datelabel->setAlignment(Qt::AlignCenter);
        Vslabel = new QLabel(History_Page);
        Vslabel->setObjectName("Vslabel");
        Vslabel->setGeometry(QRect(390, 140, 311, 51));
        sizePolicy1.setHeightForWidth(Vslabel->sizePolicy().hasHeightForWidth());
        Vslabel->setSizePolicy(sizePolicy1);
        Vslabel->setLayoutDirection(Qt::LeftToRight);
        Vslabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"padding: 15px;\n"
"font: 14pt \"My Puma\";"));
        Vslabel->setAlignment(Qt::AlignCenter);
        label_Username_3 = new QLabel(History_Page);
        label_Username_3->setObjectName("label_Username_3");
        label_Username_3->setGeometry(QRect(30, 190, 109, 24));
        label_Username_3->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));
        label_Username_3->setAlignment(Qt::AlignCenter);
        Gamestatelabel = new QLabel(History_Page);
        Gamestatelabel->setObjectName("Gamestatelabel");
        Gamestatelabel->setGeometry(QRect(10, 230, 221, 51));
        sizePolicy1.setHeightForWidth(Gamestatelabel->sizePolicy().hasHeightForWidth());
        Gamestatelabel->setSizePolicy(sizePolicy1);
        Gamestatelabel->setLayoutDirection(Qt::LeftToRight);
        Gamestatelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"padding: 15px;\n"
"font: 14pt \"My Puma\";"));
        Gamestatelabel->setAlignment(Qt::AlignCenter);
        historyPrev = new QPushButton(History_Page);
        historyPrev->setObjectName("historyPrev");
        historyPrev->setGeometry(QRect(310, 600, 171, 41));
        historyPrev->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 14pt \"My Puma\";"));
        stackedWidget->addWidget(History_Page);
        Selection_Page = new QWidget();
        Selection_Page->setObjectName("Selection_Page");
        gridLayout_5 = new QGridLayout(Selection_Page);
        gridLayout_5->setObjectName("gridLayout_5");
        Selection_backb = new QPushButton(Selection_Page);
        Selection_backb->setObjectName("Selection_backb");
        Selection_backb->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        gridLayout_5->addWidget(Selection_backb, 4, 1, 1, 1);

        player2b = new QPushButton(Selection_Page);
        player2b->setObjectName("player2b");
        player2b->setEnabled(true);
        player2b->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        gridLayout_5->addWidget(player2b, 1, 1, 1, 1);

        AIb = new QPushButton(Selection_Page);
        AIb->setObjectName("AIb");
        AIb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        gridLayout_5->addWidget(AIb, 3, 1, 1, 1);

        CPUb = new QPushButton(Selection_Page);
        CPUb->setObjectName("CPUb");
        CPUb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        gridLayout_5->addWidget(CPUb, 2, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_8, 5, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 1);

        stackedWidget->addWidget(Selection_Page);
        Player2_Page = new QWidget();
        Player2_Page->setObjectName("Player2_Page");
        formLayout_2 = new QFormLayout(Player2_Page);
        formLayout_2->setObjectName("formLayout_2");
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName("gridLayout_9");
        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_17, 2, 0, 1, 1);

        Player2_backb = new QPushButton(Player2_Page);
        Player2_backb->setObjectName("Player2_backb");
        Player2_backb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        gridLayout_9->addWidget(Player2_backb, 4, 0, 1, 1);

        Player2_lineedit = new QLineEdit(Player2_Page);
        Player2_lineedit->setObjectName("Player2_lineedit");
        Player2_lineedit->setStyleSheet(QString::fromUtf8("font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border: none;\n"
"border-bottom: 2px solid rgb(220, 40, 16);\n"
"color: #fff;\n"
"background-color: rgba(220, 40, 16, 0.1);\n"
"margin-bottom: 5px"));

        gridLayout_9->addWidget(Player2_lineedit, 1, 0, 1, 1);

        pushButton_SignUp_2 = new QPushButton(Player2_Page);
        pushButton_SignUp_2->setObjectName("pushButton_SignUp_2");
        pushButton_SignUp_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;\n"
"cursor: pointer"));

        gridLayout_9->addWidget(pushButton_SignUp_2, 3, 0, 1, 1);

        label_2 = new QLabel(Player2_Page);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"My Puma\";\n"
"color: rgb(220, 40, 16)"));

        gridLayout_9->addWidget(label_2, 0, 0, 1, 1);


        formLayout_2->setLayout(1, QFormLayout::SpanningRole, gridLayout_9);

        verticalSpacer_18 = new QSpacerItem(746, 174, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_2->setItem(2, QFormLayout::FieldRole, verticalSpacer_18);

        verticalSpacer_16 = new QSpacerItem(20, 128, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_2->setItem(0, QFormLayout::FieldRole, verticalSpacer_16);

        stackedWidget->addWidget(Player2_Page);
        Game_Page = new QWidget();
        Game_Page->setObjectName("Game_Page");
        Game_Page->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_8 = new QVBoxLayout(Game_Page);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_3 = new QGroupBox(Game_Page);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_91 = new QVBoxLayout(groupBox_3);
        verticalLayout_91->setObjectName("verticalLayout_91");
        gamestatelabel = new QLabel(groupBox_3);
        gamestatelabel->setObjectName("gamestatelabel");
        sizePolicy1.setHeightForWidth(gamestatelabel->sizePolicy().hasHeightForWidth());
        gamestatelabel->setSizePolicy(sizePolicy1);
        gamestatelabel->setLayoutDirection(Qt::LeftToRight);
        gamestatelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"padding: 15px;\n"
"font: 14pt \"My Puma\";"));
        gamestatelabel->setAlignment(Qt::AlignCenter);

        verticalLayout_91->addWidget(gamestatelabel, 0, Qt::AlignHCenter);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        XO7 = new QPushButton(groupBox_3);
        XO7->setObjectName("XO7");
        sizePolicy.setHeightForWidth(XO7->sizePolicy().hasHeightForWidth());
        XO7->setSizePolicy(sizePolicy);
        XO7->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO7, 2, 0, 1, 1);

        XO5 = new QPushButton(groupBox_3);
        XO5->setObjectName("XO5");
        sizePolicy.setHeightForWidth(XO5->sizePolicy().hasHeightForWidth());
        XO5->setSizePolicy(sizePolicy);
        XO5->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO5, 1, 1, 1, 1);

        XO8 = new QPushButton(groupBox_3);
        XO8->setObjectName("XO8");
        sizePolicy.setHeightForWidth(XO8->sizePolicy().hasHeightForWidth());
        XO8->setSizePolicy(sizePolicy);
        XO8->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO8, 2, 1, 1, 1);

        XO3 = new QPushButton(groupBox_3);
        XO3->setObjectName("XO3");
        sizePolicy.setHeightForWidth(XO3->sizePolicy().hasHeightForWidth());
        XO3->setSizePolicy(sizePolicy);
        XO3->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO3, 0, 2, 1, 1);

        XO4 = new QPushButton(groupBox_3);
        XO4->setObjectName("XO4");
        sizePolicy.setHeightForWidth(XO4->sizePolicy().hasHeightForWidth());
        XO4->setSizePolicy(sizePolicy);
        XO4->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO4, 1, 0, 1, 1);

        XO2 = new QPushButton(groupBox_3);
        XO2->setObjectName("XO2");
        sizePolicy.setHeightForWidth(XO2->sizePolicy().hasHeightForWidth());
        XO2->setSizePolicy(sizePolicy);
        XO2->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO2, 0, 1, 1, 1);

        XO9 = new QPushButton(groupBox_3);
        XO9->setObjectName("XO9");
        sizePolicy.setHeightForWidth(XO9->sizePolicy().hasHeightForWidth());
        XO9->setSizePolicy(sizePolicy);
        XO9->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO9, 2, 2, 1, 1);

        XO6 = new QPushButton(groupBox_3);
        XO6->setObjectName("XO6");
        sizePolicy.setHeightForWidth(XO6->sizePolicy().hasHeightForWidth());
        XO6->setSizePolicy(sizePolicy);
        XO6->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO6, 1, 2, 1, 1);

        XO1 = new QPushButton(groupBox_3);
        XO1->setObjectName("XO1");
        sizePolicy.setHeightForWidth(XO1->sizePolicy().hasHeightForWidth());
        XO1->setSizePolicy(sizePolicy);
        XO1->setStyleSheet(QString::fromUtf8("color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 60px bold;\n"
"background-color: rgb(220, 40, 16);\n"
"border-radius: 5px"));

        gridLayout_4->addWidget(XO1, 0, 0, 1, 1);


        verticalLayout_91->addLayout(gridLayout_4);

        XObackbox = new QGroupBox(groupBox_3);
        XObackbox->setObjectName("XObackbox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(XObackbox->sizePolicy().hasHeightForWidth());
        XObackbox->setSizePolicy(sizePolicy2);
        verticalLayout_10 = new QVBoxLayout(XObackbox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        XOreset = new QPushButton(XObackbox);
        XOreset->setObjectName("XOreset");
        sizePolicy1.setHeightForWidth(XOreset->sizePolicy().hasHeightForWidth());
        XOreset->setSizePolicy(sizePolicy1);
        XOreset->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(220, 40, 16);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        horizontalLayout_7->addWidget(XOreset);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        XOback = new QPushButton(XObackbox);
        XOback->setObjectName("XOback");
        sizePolicy1.setHeightForWidth(XOback->sizePolicy().hasHeightForWidth());
        XOback->setSizePolicy(sizePolicy1);
        XOback->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: none;\n"
"font: 12pt \"My Puma\";\n"
"padding: 12px 15px;\n"
"border-radius: 8px;\n"
"margin-bottom: 5px;"));

        horizontalLayout_7->addWidget(XOback);


        verticalLayout_10->addLayout(horizontalLayout_7);


        verticalLayout_91->addWidget(XObackbox);


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

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        pushButton_LogIn->setText(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        label_Username->setText(QCoreApplication::translate("MainWindow", "Username:  ", nullptr));
        label_Password->setText(QCoreApplication::translate("MainWindow", "Password:   ", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        Defaultb->setText(QCoreApplication::translate("MainWindow", "Play as a guest", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        label_Password1->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        lineEdit_Username1->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        label_Username1->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        pushButton_SignUp_LogIn->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        pushButton_SignUp_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Xb->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        Ob->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        Player1_backb->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        history->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        logout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        Historybackb->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        historybext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        XO7_h->setText(QString());
        XO5_h->setText(QString());
        XO8_h->setText(QString());
        XO3_h->setText(QString());
        XO4_h->setText(QString());
        XO2_h->setText(QString());
        XO9_h->setText(QString());
        XO6_h->setText(QString());
        XO1_h->setText(QString());
        label_Username_2->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        Datelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Vslabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_Username_3->setText(QCoreApplication::translate("MainWindow", "Game State", nullptr));
        Gamestatelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        historyPrev->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        Selection_backb->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        player2b->setText(QCoreApplication::translate("MainWindow", "2 Player", nullptr));
        AIb->setText(QCoreApplication::translate("MainWindow", "AI Impossible", nullptr));
        CPUb->setText(QCoreApplication::translate("MainWindow", "CPU Easy", nullptr));
        Player2_backb->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        pushButton_SignUp_2->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Player Name:", nullptr));
        groupBox_3->setTitle(QString());
        gamestatelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        XO7->setText(QString());
        XO5->setText(QString());
        XO8->setText(QString());
        XO3->setText(QString());
        XO4->setText(QString());
        XO2->setText(QString());
        XO9->setText(QString());
        XO6->setText(QString());
        XO1->setText(QString());
        XObackbox->setTitle(QString());
        XOreset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        XOback->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
