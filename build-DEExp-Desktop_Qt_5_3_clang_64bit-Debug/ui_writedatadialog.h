/********************************************************************************
** Form generated from reading UI file 'writedatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEDATADIALOG_H
#define UI_WRITEDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_WriteDataDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *ldtBytePowerSize;
    QLineEdit *ldtFileName;
    QPushButton *pbtWriteToDisk;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pbtGenerate;
    QTextEdit *tedContent;
    QLabel *label_3;
    QLineEdit *ldtByteMainSize;
    QLabel *label_5;
    QLineEdit *ldtTotalTime;
    QCheckBox *cbxRandom;

    void setupUi(QDialog *WriteDataDialog)
    {
        if (WriteDataDialog->objectName().isEmpty())
            WriteDataDialog->setObjectName(QStringLiteral("WriteDataDialog"));
        WriteDataDialog->resize(500, 430);
        buttonBox = new QDialogButtonBox(WriteDataDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 390, 481, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(WriteDataDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 10, 121, 16));
        ldtBytePowerSize = new QLineEdit(WriteDataDialog);
        ldtBytePowerSize->setObjectName(QStringLiteral("ldtBytePowerSize"));
        ldtBytePowerSize->setGeometry(QRect(318, 10, 113, 23));
        ldtFileName = new QLineEdit(WriteDataDialog);
        ldtFileName->setObjectName(QStringLiteral("ldtFileName"));
        ldtFileName->setGeometry(QRect(100, 310, 391, 23));
        pbtWriteToDisk = new QPushButton(WriteDataDialog);
        pbtWriteToDisk->setObjectName(QStringLiteral("pbtWriteToDisk"));
        pbtWriteToDisk->setGeometry(QRect(230, 280, 161, 23));
        label_2 = new QLabel(WriteDataDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(288, 10, 21, 16));
        label_4 = new QLabel(WriteDataDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(8, 340, 81, 16));
        pbtGenerate = new QPushButton(WriteDataDialog);
        pbtGenerate->setObjectName(QStringLiteral("pbtGenerate"));
        pbtGenerate->setGeometry(QRect(158, 50, 181, 23));
        tedContent = new QTextEdit(WriteDataDialog);
        tedContent->setObjectName(QStringLiteral("tedContent"));
        tedContent->setGeometry(QRect(8, 80, 481, 181));
        label_3 = new QLabel(WriteDataDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(8, 310, 81, 16));
        ldtByteMainSize = new QLineEdit(WriteDataDialog);
        ldtByteMainSize->setObjectName(QStringLiteral("ldtByteMainSize"));
        ldtByteMainSize->setGeometry(QRect(158, 10, 113, 23));
        label_5 = new QLabel(WriteDataDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 340, 161, 16));
        ldtTotalTime = new QLineEdit(WriteDataDialog);
        ldtTotalTime->setObjectName(QStringLiteral("ldtTotalTime"));
        ldtTotalTime->setGeometry(QRect(100, 340, 221, 23));
        cbxRandom = new QCheckBox(WriteDataDialog);
        cbxRandom->setObjectName(QStringLiteral("cbxRandom"));
        cbxRandom->setGeometry(QRect(100, 280, 131, 17));

        retranslateUi(WriteDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WriteDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WriteDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WriteDataDialog);
    } // setupUi

    void retranslateUi(QDialog *WriteDataDialog)
    {
        WriteDataDialog->setWindowTitle(QApplication::translate("WriteDataDialog", "Dialog", 0));
        label->setText(QApplication::translate("WriteDataDialog", "Data Size (Bytes)", 0));
        ldtBytePowerSize->setText(QApplication::translate("WriteDataDialog", "8", 0));
        pbtWriteToDisk->setText(QApplication::translate("WriteDataDialog", "Write to Disk", 0));
        label_2->setText(QApplication::translate("WriteDataDialog", "^", 0));
        label_4->setText(QApplication::translate("WriteDataDialog", "Total Time", 0));
        pbtGenerate->setText(QApplication::translate("WriteDataDialog", "Generate!", 0));
        label_3->setText(QApplication::translate("WriteDataDialog", "File name", 0));
        ldtByteMainSize->setText(QApplication::translate("WriteDataDialog", "2", 0));
        label_5->setText(QApplication::translate("WriteDataDialog", "Microseconds", 0));
        cbxRandom->setText(QApplication::translate("WriteDataDialog", "Random Access", 0));
    } // retranslateUi

};

namespace Ui {
    class WriteDataDialog: public Ui_WriteDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEDATADIALOG_H
