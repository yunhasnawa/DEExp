#include "readdatadialog.h"
#include "ui_readdatadialog.h"

ReadDataDialog::ReadDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReadDataDialog)
{
    ui->setupUi(this);
}

ReadDataDialog::~ReadDataDialog()
{
    delete ui;
}
