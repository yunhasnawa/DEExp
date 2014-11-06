/********************************************************************************
** Form generated from reading UI file 'readdataautodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READDATAAUTODIALOG_H
#define UI_READDATAAUTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ReadDataAutoDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QTextEdit *tedContent;
    QPushButton *pbtLookup;
    QPushButton *pbtAutoRead;
    QTextEdit *tedFileNames;

    void setupUi(QDialog *ReadDataAutoDialog)
    {
        if (ReadDataAutoDialog->objectName().isEmpty())
            ReadDataAutoDialog->setObjectName(QStringLiteral("ReadDataAutoDialog"));
        ReadDataAutoDialog->resize(500, 470);
        buttonBox = new QDialogButtonBox(ReadDataAutoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 430, 481, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(ReadDataAutoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(8, 10, 51, 16));
        tedContent = new QTextEdit(ReadDataAutoDialog);
        tedContent->setObjectName(QStringLiteral("tedContent"));
        tedContent->setGeometry(QRect(10, 120, 481, 301));
        pbtLookup = new QPushButton(ReadDataAutoDialog);
        pbtLookup->setObjectName(QStringLiteral("pbtLookup"));
        pbtLookup->setGeometry(QRect(380, 10, 111, 23));
        pbtAutoRead = new QPushButton(ReadDataAutoDialog);
        pbtAutoRead->setObjectName(QStringLiteral("pbtAutoRead"));
        pbtAutoRead->setGeometry(QRect(160, 90, 181, 23));
        tedFileNames = new QTextEdit(ReadDataAutoDialog);
        tedFileNames->setObjectName(QStringLiteral("tedFileNames"));
        tedFileNames->setGeometry(QRect(70, 10, 301, 71));

        retranslateUi(ReadDataAutoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReadDataAutoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ReadDataAutoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReadDataAutoDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadDataAutoDialog)
    {
        ReadDataAutoDialog->setWindowTitle(QApplication::translate("ReadDataAutoDialog", "Dialog", 0));
        label_3->setText(QApplication::translate("ReadDataAutoDialog", "File names", 0));
        pbtLookup->setText(QApplication::translate("ReadDataAutoDialog", "Lookup..", 0));
        pbtAutoRead->setText(QApplication::translate("ReadDataAutoDialog", "Auto Read!", 0));
    } // retranslateUi

};

namespace Ui {
    class ReadDataAutoDialog: public Ui_ReadDataAutoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READDATAAUTODIALOG_H
