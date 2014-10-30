#include "writedatadialog.h"
#include "ui_writedatadialog.h"
#include "QMessageBox"
#include "qmath.h"
#include "qdir.h"
#include "qfile.h"
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

    // TESTING AREA

    //this->ui->tedContent->setText(Engine::instance()->generateFileName("tes"));
}

void WriteDataDialog::retrieveActualBytesSize()
{
    int mainSize = this->mainSizeString.toInt();
    int powerSize = this->powerSizeString.toInt();

    this->actualBytesSize = qPow(mainSize, powerSize);
}

void WriteDataDialog::retrieveGeneratedContent()
{
    QString randomSeed = Engine::instance()->randomSeed;

    int randomSeedCount = randomSeed.count();

    this->generatedContent = QString("");

    for(int i = 0; i < this->actualBytesSize; i++)
    {
        int randomIndex = Helper::generateRandomBetween(0, randomSeedCount-1);

        QString element = Helper::findStringAtIndex(randomSeed, randomIndex);

        this->generatedContent.append(element);
    }
}

void WriteDataDialog::on_pbtWriteToDisk_clicked()
{
    QString defaultFileName = Engine::instance()->generateFileName("tes");

    Engine::instance()->writeToFile(this->generatedContent, defaultFileName);

    this->ui->ldtFileName->setText(defaultFileName);
}
