#include "fileoperationdialog.h"
#include "ui_fileoperationdialog.h"

FileOperationDialog::FileOperationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileOperationDialog)
{
    ui->setupUi(this);
}

FileOperationDialog::~FileOperationDialog()
{
    delete ui;
}
