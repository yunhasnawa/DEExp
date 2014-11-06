/********************************************************************************
** Form generated from reading UI file 'writedataautodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEDATAAUTODIALOG_H
#define UI_WRITEDATAAUTODIALOG_H

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

class Ui_WriteDataAutoDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *ldtByteMainSizeFrom;
    QLabel *label;
    QPushButton *pbtAutoWrite;
    QLabel *label_2;
    QLineEdit *ldtBytePowerSizeFrom;
    QLabel *label_3;
    QLineEdit *ldtBytePowerSizeTo;
    QLabel *label_4;
    QLineEdit *ldtByteMainSizeTo;
    QLabel *label_5;
    QTextEdit *tedContent;

    void setupUi(QDialog *WriteDataAutoDialog)
    {
        if (WriteDataAutoDialog->objectName().isEmpty())
            WriteDataAutoDialog->setObjectName(QStringLiteral("WriteDataAutoDialog"));
        WriteDataAutoDialog->resize(500, 430);
        buttonBox = new QDialogButtonBox(WriteDataAutoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 390, 481, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        ldtByteMainSizeFrom = new QLineEdit(WriteDataAutoDialog);
        ldtByteMainSizeFrom->setObjectName(QStringLiteral("ldtByteMainSizeFrom"));
        ldtByteMainSizeFrom->setGeometry(QRect(160, 10, 113, 23));
        label = new QLabel(WriteDataAutoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 91, 16));
        pbtAutoWrite = new QPushButton(WriteDataAutoDialog);
        pbtAutoWrite->setObjectName(QStringLiteral("pbtAutoWrite"));
        pbtAutoWrite->setGeometry(QRect(160, 80, 181, 23));
        label_2 = new QLabel(WriteDataAutoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 10, 21, 16));
        ldtBytePowerSizeFrom = new QLineEdit(WriteDataAutoDialog);
        ldtBytePowerSizeFrom->setObjectName(QStringLiteral("ldtBytePowerSizeFrom"));
        ldtBytePowerSizeFrom->setGeometry(QRect(320, 10, 113, 23));
        label_3 = new QLabel(WriteDataAutoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 10, 31, 16));
        ldtBytePowerSizeTo = new QLineEdit(WriteDataAutoDialog);
        ldtBytePowerSizeTo->setObjectName(QStringLiteral("ldtBytePowerSizeTo"));
        ldtBytePowerSizeTo->setGeometry(QRect(320, 40, 113, 23));
        label_4 = new QLabel(WriteDataAutoDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 40, 21, 16));
        ldtByteMainSizeTo = new QLineEdit(WriteDataAutoDialog);
        ldtByteMainSizeTo->setObjectName(QStringLiteral("ldtByteMainSizeTo"));
        ldtByteMainSizeTo->setGeometry(QRect(160, 40, 113, 23));
        label_5 = new QLabel(WriteDataAutoDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 40, 31, 16));
        tedContent = new QTextEdit(WriteDataAutoDialog);
        tedContent->setObjectName(QStringLiteral("tedContent"));
        tedContent->setGeometry(QRect(10, 110, 481, 271));

        retranslateUi(WriteDataAutoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WriteDataAutoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WriteDataAutoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WriteDataAutoDialog);
    } // setupUi

    void retranslateUi(QDialog *WriteDataAutoDialog)
    {
        WriteDataAutoDialog->setWindowTitle(QApplication::translate("WriteDataAutoDialog", "Dialog", 0));
        ldtByteMainSizeFrom->setText(QApplication::translate("WriteDataAutoDialog", "2", 0));
        label->setText(QApplication::translate("WriteDataAutoDialog", "Data Size (Bytes)", 0));
        pbtAutoWrite->setText(QApplication::translate("WriteDataAutoDialog", "Auto Write!", 0));
        label_2->setText(QApplication::translate("WriteDataAutoDialog", "^", 0));
        ldtBytePowerSizeFrom->setText(QApplication::translate("WriteDataAutoDialog", "0", 0));
        label_3->setText(QApplication::translate("WriteDataAutoDialog", "From:", 0));
        ldtBytePowerSizeTo->setText(QApplication::translate("WriteDataAutoDialog", "8", 0));
        label_4->setText(QApplication::translate("WriteDataAutoDialog", "^", 0));
        ldtByteMainSizeTo->setText(QApplication::translate("WriteDataAutoDialog", "2", 0));
        label_5->setText(QApplication::translate("WriteDataAutoDialog", "To:", 0));
    } // retranslateUi

};

namespace Ui {
    class WriteDataAutoDialog: public Ui_WriteDataAutoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEDATAAUTODIALOG_H
