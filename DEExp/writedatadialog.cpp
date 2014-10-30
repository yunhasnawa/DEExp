#include "writedatadialog.h"
#include "ui_writedatadialog.h"
#include "QMessageBox"
#include "engine.h"

WriteDataDialog::WriteDataDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WriteDataDialog)
{
    ui->setupUi(this);

    this->initializeProperties();
}

WriteDataDialog::~WriteDataDialog()
{
    delete ui;
}

void WriteDataDialog::initializeProperties()
{

}

void WriteDataDialog::on_pbtGenerate_clicked()
{
    this->retrieveDataFromUI();

    this->ui->tedContent->setText(this->generatedContent);
}

void WriteDataDialog::retrieveDataFromUI()
{
    this->mainSizeString = this->ui->ldtByteMainSize->text();
    this->powerSizeString = this->ui->ldtBytePowerSize->text();

    this->retrieveActualBytesSize();
    this->retrieveGeneratedContent();
}

void WriteDataDialog::retrieveActualBytesSize()
{
    int mainSize = this->mainSizeString.toInt();
    int powerSize = this->powerSizeString.toInt();

    this->actualBytesSize = qPow(mainSize, powerSize);
}

void WriteDataDialog::retrieveGeneratedContent()
{
    this->generatedContent = Engine::instance()->generateRandomText(this->actualBytesSize);
}

void WriteDataDialog::on_pbtWriteToDisk_clicked()
{
    QString tag = QString::number(this->actualBytesSize);

    QString defaultFileName = Engine::instance()->generateFileName(tag);

    FileTime ft = Engine::instance()->writeToFile(this->generatedContent, defaultFileName);

    this->ui->ldtFileName->setText(ft.fileName);
    this->ui->ldtTotalTime->setText(ft.writeTimeString());
}
