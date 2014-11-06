#include "readdataautodialog.h"
#include "ui_readdataautodialog.h"

ReadDataAutoDialog::ReadDataAutoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReadDataAutoDialog)
{
    ui->setupUi(this);
}

ReadDataAutoDialog::~ReadDataAutoDialog()
{
    delete ui;
}

void ReadDataAutoDialog::on_pbtLookup_clicked()
{

}

void ReadDataAutoDialog::on_pbtAutoRead_clicked()
{

}
