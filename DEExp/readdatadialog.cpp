#include "readdatadialog.h"
#include "ui_readdatadialog.h"
#include "engine.h"

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

void ReadDataDialog::on_pbtLookup_clicked()
{
    this->fileName = Engine::instance()->lookupFile(this);

    this->ui->ldtFileName->setText(this->fileName);
}
