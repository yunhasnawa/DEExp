#-------------------------------------------------
#
# Project created by QtCreator 2014-10-25T14:32:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DEExp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    readdatadialog.cpp \
    writedatadialog.cpp \
    fileoperationdialog.cpp

HEADERS  += mainwindow.h \
    readdatadialog.h \
    writedatadialog.h \
    fileoperationdialog.h

FORMS    += mainwindow.ui \
    readdatadialog.ui \
    writedatadialog.ui \
    fileoperationdialog.ui
