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

void ReadDataDialog::fillDataToUI()
{
    this->ui->tedContent->setText(this->fileContent);

    QString totalTimeString = QString::number(this->totalTime);

    this->ui->ldtTotalTime->setText(totalTimeString);

    QString mainSizeString = QString::number(this->mainDataSize);
    QString powerDataString = QString::number(this->powerDataSize);

    this->ui->ldtMainSize->setText(mainSizeString);
    this->ui->ldtPowerSize->setText(powerDataString);
}

void ReadDataDialog::on_pbtLookup_clicked()
{
    this->fileName = Engine::instance()->lookupFile(this);

    this->ui->ldtFileName->setText(this->fileName);
}

void ReadDataDialog::on_pbtRead_clicked()
{
    bool random = this->ui->cbxRandom->isChecked();

    FileTime ft = Engine::instance()->readFile(this->fileName, random);

    this->fileContent = ft.fileContent;
    this->totalTime = ft.readTime / 1000;
    this->dataSize = this->fileContent.length();

    this->mainDataSize = 2;
    this->powerDataSize = Helper::baselog(2, this->dataSize);

    this->fillDataToUI();
}
