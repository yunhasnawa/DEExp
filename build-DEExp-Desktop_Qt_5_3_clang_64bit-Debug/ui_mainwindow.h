/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRead_Data;
    QAction *actionWrite_Data;
    QAction *actionFile_Operation;
    QAction *actionWrite_Data_Auto;
    QAction *actionRead_Data_Auto;
    QWidget *centralWidget;
    QPushButton *pbWriteData;
    QPushButton *pbReadData;
    QPushButton *pbFileOps;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAuto;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(571, 387);
        actionRead_Data = new QAction(MainWindow);
        actionRead_Data->setObjectName(QStringLiteral("actionRead_Data"));
        actionWrite_Data = new QAction(MainWindow);
        actionWrite_Data->setObjectName(QStringLiteral("actionWrite_Data"));
        actionFile_Operation = new QAction(MainWindow);
        actionFile_Operation->setObjectName(QStringLiteral("actionFile_Operation"));
        actionWrite_Data_Auto = new QAction(MainWindow);
        actionWrite_Data_Auto->setObjectName(QStringLiteral("actionWrite_Data_Auto"));
        actionRead_Data_Auto = new QAction(MainWindow);
        actionRead_Data_Auto->setObjectName(QStringLiteral("actionRead_Data_Auto"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pbWriteData = new QPushButton(centralWidget);
        pbWriteData->setObjectName(QStringLiteral("pbWriteData"));
        pbWriteData->setGeometry(QRect(129, 140, 101, 61));
        pbReadData = new QPushButton(centralWidget);
        pbReadData->setObjectName(QStringLiteral("pbReadData"));
        pbReadData->setGeometry(QRect(229, 140, 101, 61));
        pbFileOps = new QPushButton(centralWidget);
        pbFileOps->setObjectName(QStringLiteral("pbFileOps"));
        pbFileOps->setGeometry(QRect(329, 140, 101, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 290, 301, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 310, 451, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 290, 451, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 80, 331, 20));
        QFont font1;
        font1.setItalic(true);
        label_4->setFont(font1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 30, 421, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 571, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuAuto = new QMenu(menuBar);
        menuAuto->setObjectName(QStringLiteral("menuAuto"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAuto->menuAction());
        menuMenu->addAction(actionRead_Data);
        menuMenu->addAction(actionWrite_Data);
        menuMenu->addAction(actionFile_Operation);
        menuAuto->addAction(actionWrite_Data_Auto);
        menuAuto->addAction(actionRead_Data_Auto);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DEExp - Data Engineering Experiments", 0));
        actionRead_Data->setText(QApplication::translate("MainWindow", "Read Data", 0));
        actionWrite_Data->setText(QApplication::translate("MainWindow", "Write Data", 0));
        actionFile_Operation->setText(QApplication::translate("MainWindow", "File Operation", 0));
        actionWrite_Data_Auto->setText(QApplication::translate("MainWindow", "Write Data", 0));
        actionRead_Data_Auto->setText(QApplication::translate("MainWindow", "Read Data", 0));
        pbWriteData->setText(QApplication::translate("MainWindow", "Write Data", 0));
        pbReadData->setText(QApplication::translate("MainWindow", "Read Data", 0));
        pbFileOps->setText(QApplication::translate("MainWindow", "File Ops", 0));
        label->setText(QApplication::translate("MainWindow", "Created By: ", 0));
        label_2->setText(QApplication::translate("MainWindow", "Yoppy Yunhasnawa (M0329016)", 0));
        label_3->setText(QApplication::translate("MainWindow", "Toga Aldila Cinderatama (M0329011)", 0));
        label_4->setText(QApplication::translate("MainWindow", "Click one or more buttons below or choose from Menu", 0));
        label_5->setText(QApplication::translate("MainWindow", "Data Engineering Class Assignment #1", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Single", 0));
        menuAuto->setTitle(QApplication::translate("MainWindow", "Auto", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
