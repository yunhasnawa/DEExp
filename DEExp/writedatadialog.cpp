#include "writedatadialog.h"
#include "ui_writedatadialog.h"

WriteDataDialog::WriteDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WriteDataDialog)
{
    ui->setupUi(this);
}

WriteDataDialog::~WriteDataDialog()
{
    delete ui;
}
