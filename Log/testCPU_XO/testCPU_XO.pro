QT += testlib
QT += core gui sql widgets

CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES += \
    tst_testing.cpp \
    ../AI_minimax_beta.cpp \
    ../CPU.cpp \
    ../gameboard.cpp \
    ../mainwindow.cpp

HEADERS += \
    ../AI_minimax_beta.h \
    ../CPU.h \
    ../StackIbdex.h \
    ../gameboard.h \
    ../mainwindow.h \
    ../QMainWindow.h

FORMS += \
    ../mainwindow.ui

TARGET = MytestCPU_XO
