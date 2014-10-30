/********************************************************************************
** Form generated from reading UI file 'readdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READDATADIALOG_H
#define UI_READDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ReadDataDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *ldtMainSize;
    QLineEdit *ldtPowerSize;
    QLabel *label_2;
    QPushButton *pbtLookup;
    QTextEdit *tedContent;
    QPushButton *pbtRead;
    QLabel *label_3;
    QLineEdit *ldtFileName;
    QLineEdit *ldtTotalTime;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *ReadDataDialog)
    {
        if (ReadDataDialog->objectName().isEmpty())
            ReadDataDialog->setObjectName(QStringLiteral("ReadDataDialog"));
        ReadDataDialog->resize(500, 380);
        buttonBox = new QDialogButtonBox(ReadDataDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 340, 481, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ReadDataDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 280, 121, 16));
        ldtMainSize = new QLineEdit(ReadDataDialog);
        ldtMainSize->setObjectName(QStringLiteral("ldtMainSize"));
        ldtMainSize->setGeometry(QRect(160, 280, 113, 23));
        ldtPowerSize = new QLineEdit(ReadDataDialog);
        ldtPowerSize->setObjectName(QStringLiteral("ldtPowerSize"));
        ldtPowerSize->setGeometry(QRect(320, 280, 113, 23));
        label_2 = new QLabel(ReadDataDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 280, 21, 16));
        pbtLookup = new QPushButton(ReadDataDialog);
        pbtLookup->setObjectName(QStringLiteral("pbtLookup"));
        pbtLookup->setGeometry(QRect(360, 10, 131, 23));
        tedContent = new QTextEdit(ReadDataDialog);
        tedContent->setObjectName(QStringLiteral("tedContent"));
        tedContent->setGeometry(QRect(10, 80, 481, 181));
        pbtRead = new QPushButton(ReadDataDialog);
        pbtRead->setObjectName(QStringLiteral("pbtRead"));
        pbtRead->setGeometry(QRect(160, 50, 181, 23));
        label_3 = new QLabel(ReadDataDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(8, 10, 121, 16));
        ldtFileName = new QLineEdit(ReadDataDialog);
        ldtFileName->setObjectName(QStringLiteral("ldtFileName"));
        ldtFileName->setGeometry(QRect(100, 10, 251, 23));
        ldtTotalTime = new QLineEdit(ReadDataDialog);
        ldtTotalTime->setObjectName(QStringLiteral("ldtTotalTime"));
        ldtTotalTime->setGeometry(QRect(102, 310, 221, 23));
        label_4 = new QLabel(ReadDataDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 310, 81, 16));
        label_5 = new QLabel(ReadDataDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 310, 91, 16));

        retranslateUi(ReadDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReadDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ReadDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReadDataDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadDataDialog)
    {
        ReadDataDialog->setWindowTitle(QApplication::translate("ReadDataDialog", "Dialog", 0));
        label->setText(QApplication::translate("ReadDataDialog", "Data Size (Bytes)", 0));
        label_2->setText(QApplication::translate("ReadDataDialog", "^", 0));
        pbtLookup->setText(QApplication::translate("ReadDataDialog", "Lookup..", 0));
        pbtRead->setText(QApplication::translate("ReadDataDialog", "Read!", 0));
        label_3->setText(QApplication::translate("ReadDataDialog", "File name", 0));
        label_4->setText(QApplication::translate("ReadDataDialog", "Total Time", 0));
        label_5->setText(QApplication::translate("ReadDataDialog", "Nano seconds", 0));
    } // retranslateUi

};

namespace Ui {
    class ReadDataDialog: public Ui_ReadDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READDATADIALOG_H
