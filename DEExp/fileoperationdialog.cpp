#include "fileoperationdialog.h"
#include "ui_fileoperationdialog.h"
#include "engine.h"

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

void FileOperationDialog::fillDataToUI()
{
    this->ui->tedContent->setText(this->fileContent);

    QString totalTimeString = QString::number(this->totalTime);

    this->ui->ldtTotalTime->setText(totalTimeString);
}

void FileOperationDialog::on_pbtLookup_clicked()
{
    this->fileName = Engine::instance()->lookupFile(this);

    this->ui->ldtFileName->setText(this->fileName);

    this->isNew = false;
}

void FileOperationDialog::on_pbtOpen_clicked()
{
    if(!this->isNew)
    {
        FileTime ft = Engine::instance()->readFile(this->fileName);

        this->fileContent = ft.fileContent;

        this->totalTime = ft.readTime;
    }

    this->fillDataToUI();
}

void FileOperationDialog::detectFileNameChange()
{
    QString uiText = this->ui->ldtFileName->text();
    QString currentFileName = this->fileName;

    int compare = uiText.compare(uiText, currentFileName, Qt::CaseSensitive);

    if(compare == 0)
    {
        return;
    }
    else
    {
        this->fileName = uiText;
    }
}

void FileOperationDialog::on_pbtGenerate_clicked()
{
    this->fileContent = "This is a new File (29 bytes)";

    this->fileName = Engine::instance()->generateFileName("29_new");

    FileTime ft = Engine::instance()->writeToFile(this->fileContent, this->fileName);

    this->ui->ldtFileNameNew->setText(this->fileName);

    this->totalTime = ft.writeTime;

    this->isNew = true;
}
