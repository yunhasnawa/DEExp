#include "writedataautodialog.h"
#include "ui_writedataautodialog.h"

WriteDataAutoDialog::WriteDataAutoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WriteDataAutoDialog)
{
    ui->setupUi(this);

    this->initProperties();
}

WriteDataAutoDialog::~WriteDataAutoDialog()
{
    delete ui;
}

void WriteDataAutoDialog::initProperties()
{
    this->engine = Engine::instance();
}

void WriteDataAutoDialog::on_pbtAutoWrite_clicked()
{
    this->retrieveDataFromUI();

    this->performAutoWrite();
}

void WriteDataAutoDialog::retrieveDataFromUI()
{
    this->mainSizeFrom  = this->ui->ldtByteMainSizeFrom->text().toInt();
    this->powerSizeFrom = this->ui->ldtBytePowerSizeFrom->text().toInt();
    this->mainSizeTo    = this->ui->ldtByteMainSizeTo->text().toInt();
    this->powerSizeTo   = this->ui->ldtBytePowerSizeTo->text().toInt();

    this->retrieveByteSizes();
}

void WriteDataAutoDialog::retrieveByteSizes()
{
    this->byteSizeFrom = qPow(this->mainSizeFrom, this->powerSizeFrom);
    this->byteSizeTo   = qPow(this->mainSizeTo, this->powerSizeTo);
}

void WriteDataAutoDialog::performAutoWrite()
{
    for(qint32 i = this->byteSizeFrom; i <= this->byteSizeTo; i++)
    {
        QString tag = QString::number(i);

        QString defaultFileName = Engine::instance()->generateFileName(tag);

        //FileTime ft = Engine::instance()->writeToFile(this->generatedContent, defaultFileName);

        //this->ui->ldtFileName->setText(ft.fileName);
        //this->ui->ldtTotalTime->setText(ft.writeTimeString());
    }
}
