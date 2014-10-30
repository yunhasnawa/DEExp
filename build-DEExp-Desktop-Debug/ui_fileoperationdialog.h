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
    QLineEdit *ldtFileName;
    QPushButton *pbtLookup;
    QLabel *label_3;
    QPushButton *pbtOpen;
    QTextEdit *tedContent;
    QLabel *label_4;
    QLineEdit *ldtTotalTime;
    QPushButton *pbtGenerate;
    QLineEdit *ldtFileNameNew;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *FileOperationDialog)
    {
        if (FileOperationDialog->objectName().isEmpty())
            FileOperationDialog->setObjectName(QStringLiteral("FileOperationDialog"));
        FileOperationDialog->resize(500, 390);
        buttonBox = new QDialogButtonBox(FileOperationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 350, 481, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        ldtFileName = new QLineEdit(FileOperationDialog);
        ldtFileName->setObjectName(QStringLiteral("ldtFileName"));
        ldtFileName->setGeometry(QRect(92, 10, 261, 23));
        pbtLookup = new QPushButton(FileOperationDialog);
        pbtLookup->setObjectName(QStringLiteral("pbtLookup"));
        pbtLookup->setGeometry(QRect(362, 10, 131, 23));
        label_3 = new QLabel(FileOperationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 111, 16));
        pbtOpen = new QPushButton(FileOperationDialog);
        pbtOpen->setObjectName(QStringLiteral("pbtOpen"));
        pbtOpen->setGeometry(QRect(130, 90, 221, 23));
        tedContent = new QTextEdit(FileOperationDialog);
        tedContent->setObjectName(QStringLiteral("tedContent"));
        tedContent->setGeometry(QRect(10, 120, 481, 181));
        label_4 = new QLabel(FileOperationDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(8, 320, 81, 16));
        ldtTotalTime = new QLineEdit(FileOperationDialog);
        ldtTotalTime->setObjectName(QStringLiteral("ldtTotalTime"));
        ldtTotalTime->setGeometry(QRect(100, 320, 221, 23));
        pbtGenerate = new QPushButton(FileOperationDialog);
        pbtGenerate->setObjectName(QStringLiteral("pbtGenerate"));
        pbtGenerate->setGeometry(QRect(362, 50, 131, 23));
        ldtFileNameNew = new QLineEdit(FileOperationDialog);
        ldtFileNameNew->setObjectName(QStringLiteral("ldtFileNameNew"));
        ldtFileNameNew->setGeometry(QRect(92, 50, 261, 23));
        label_5 = new QLabel(FileOperationDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 50, 111, 16));
        label_6 = new QLabel(FileOperationDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 320, 91, 16));

        retranslateUi(FileOperationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FileOperationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FileOperationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FileOperationDialog);
    } // setupUi

    void retranslateUi(QDialog *FileOperationDialog)
    {
        FileOperationDialog->setWindowTitle(QApplication::translate("FileOperationDialog", "Dialog", 0));
        pbtLookup->setText(QApplication::translate("FileOperationDialog", "Lookup..", 0));
        label_3->setText(QApplication::translate("FileOperationDialog", "Existing File", 0));
        pbtOpen->setText(QApplication::translate("FileOperationDialog", "Open!", 0));
        label_4->setText(QApplication::translate("FileOperationDialog", "Total Time", 0));
        pbtGenerate->setText(QApplication::translate("FileOperationDialog", "Generate..", 0));
        label_5->setText(QApplication::translate("FileOperationDialog", "New File", 0));
        label_6->setText(QApplication::translate("FileOperationDialog", "Nano seconds", 0));
    } // retranslateUi

};

namespace Ui {
    class FileOperationDialog: public Ui_FileOperationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEOPERATIONDIALOG_H
