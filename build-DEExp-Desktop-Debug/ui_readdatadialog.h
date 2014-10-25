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

QT_BEGIN_NAMESPACE

class Ui_ReadDataDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ReadDataDialog)
    {
        if (ReadDataDialog->objectName().isEmpty())
            ReadDataDialog->setObjectName(QStringLiteral("ReadDataDialog"));
        ReadDataDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(ReadDataDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ReadDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReadDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ReadDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReadDataDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadDataDialog)
    {
        ReadDataDialog->setWindowTitle(QApplication::translate("ReadDataDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ReadDataDialog: public Ui_ReadDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READDATADIALOG_H
