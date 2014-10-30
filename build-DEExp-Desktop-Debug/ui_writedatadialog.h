/********************************************************************************
** Form generated from reading UI file 'writedatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEDATADIALOG_H
#define UI_WRITEDATADIALOG_H

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

class Ui_WriteDataDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;

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
        lineEdit_2 = new QLineEdit(WriteDataDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(318, 10, 113, 23));
        lineEdit_3 = new QLineEdit(WriteDataDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 310, 391, 23));
        pushButton_2 = new QPushButton(WriteDataDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(158, 270, 181, 23));
        label_2 = new QLabel(WriteDataDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(288, 10, 21, 16));
        label_4 = new QLabel(WriteDataDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(8, 340, 81, 16));
        pushButton = new QPushButton(WriteDataDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(158, 50, 181, 23));
        textEdit = new QTextEdit(WriteDataDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(8, 80, 481, 181));
        label_3 = new QLabel(WriteDataDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(8, 310, 81, 16));
        lineEdit = new QLineEdit(WriteDataDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(158, 10, 113, 23));
        lineEdit_4 = new QLineEdit(WriteDataDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 340, 391, 23));

        retranslateUi(WriteDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WriteDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WriteDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WriteDataDialog);
    } // setupUi

    void retranslateUi(QDialog *WriteDataDialog)
    {
        WriteDataDialog->setWindowTitle(QApplication::translate("WriteDataDialog", "Dialog", 0));
        label->setText(QApplication::translate("WriteDataDialog", "Data Size (Bytes)", 0));
        pushButton_2->setText(QApplication::translate("WriteDataDialog", "Write to Disk", 0));
        label_2->setText(QApplication::translate("WriteDataDialog", "^", 0));
        label_4->setText(QApplication::translate("WriteDataDialog", "Write Speed", 0));
        pushButton->setText(QApplication::translate("WriteDataDialog", "Generate!", 0));
        label_3->setText(QApplication::translate("WriteDataDialog", "File name", 0));
    } // retranslateUi

};

namespace Ui {
    class WriteDataDialog: public Ui_WriteDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEDATADIALOG_H
