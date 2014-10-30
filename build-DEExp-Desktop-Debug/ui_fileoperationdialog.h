/********************************************************************************
** Form generated from reading UI file 'fileoperationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEOPERATIONDIALOG_H
#define UI_FILEOPERATIONDIALOG_H

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

class Ui_FileOperationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *FileOperationDialog)
    {
        if (FileOperationDialog->objectName().isEmpty())
            FileOperationDialog->setObjectName(QStringLiteral("FileOperationDialog"));
        FileOperationDialog->resize(500, 350);
        buttonBox = new QDialogButtonBox(FileOperationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 310, 481, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_3 = new QLineEdit(FileOperationDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(132, 10, 221, 23));
        pushButton = new QPushButton(FileOperationDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(362, 10, 131, 23));
        label_3 = new QLabel(FileOperationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 111, 16));
        pushButton_2 = new QPushButton(FileOperationDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 50, 221, 23));
        textEdit = new QTextEdit(FileOperationDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 80, 481, 181));
        label_4 = new QLabel(FileOperationDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(8, 280, 81, 16));
        lineEdit_4 = new QLineEdit(FileOperationDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 280, 391, 23));

        retranslateUi(FileOperationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FileOperationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FileOperationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FileOperationDialog);
    } // setupUi

    void retranslateUi(QDialog *FileOperationDialog)
    {
        FileOperationDialog->setWindowTitle(QApplication::translate("FileOperationDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("FileOperationDialog", "Lookup..", 0));
        label_3->setText(QApplication::translate("FileOperationDialog", "New/Existing File", 0));
        pushButton_2->setText(QApplication::translate("FileOperationDialog", "Open!", 0));
        label_4->setText(QApplication::translate("FileOperationDialog", "Total Time", 0));
    } // retranslateUi

};

namespace Ui {
    class FileOperationDialog: public Ui_FileOperationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEOPERATIONDIALOG_H
