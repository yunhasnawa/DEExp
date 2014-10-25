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

QT_BEGIN_NAMESPACE

class Ui_FileOperationDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FileOperationDialog)
    {
        if (FileOperationDialog->objectName().isEmpty())
            FileOperationDialog->setObjectName(QStringLiteral("FileOperationDialog"));
        FileOperationDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(FileOperationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(FileOperationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FileOperationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FileOperationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FileOperationDialog);
    } // setupUi

    void retranslateUi(QDialog *FileOperationDialog)
    {
        FileOperationDialog->setWindowTitle(QApplication::translate("FileOperationDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class FileOperationDialog: public Ui_FileOperationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEOPERATIONDIALOG_H
