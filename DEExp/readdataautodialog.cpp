#include "readdataautodialog.h"
#include "ui_readdataautodialog.h"

ReadDataAutoDialog::ReadDataAutoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReadDataAutoDialog)
{
    ui->setupUi(this);

    this->initProperties();
}

ReadDataAutoDialog::~ReadDataAutoDialog()
{
    delete ui;
}

void ReadDataAutoDialog::initProperties()
{
    this->engine = Engine::instance();
}

void ReadDataAutoDialog::retrieveDataFromUI()
{

}

void ReadDataAutoDialog::on_pbtLookup_clicked()
{
    this->fileNames = this->engine->lookupFiles(this);

    this->ui->tedFileNames->setText(this->serializedFileNames());
}

void ReadDataAutoDialog::on_pbtAutoRead_clicked()
{
    this->performAutoRead();
}

QString ReadDataAutoDialog::serializedFileNames()
{
    QString serialized = "";

    for(int i = 0; i < this->fileNames.count(); i++)
    {
        serialized += this->fileNames.at(i);

        if(i < this->fileNames.count() - 1)
        {
            serialized += ";\n";
        }
    }

    return serialized;
}

void ReadDataAutoDialog::performAutoRead()
{
    for(int i = 0; i < this->fileNames.count(); i++)
    {
        QString fileName = this->fileNames.at(i);

        FileTime ft = this->engine->readFile(fileName);

        this->logTedLn(ft);
    }
}

void ReadDataAutoDialog::logTedLn(FileTime ft)
{
    QString log = "";

    log += "Read " + ft.fileName;
    log += " (" + ft.kbSizeString() + " kB)";
    log += " in " + ft.msReadTimeString() + " micro seconds";

    this->ui->tedContent->append(log);
}

void ReadDataAutoDialog::on_pbtClear_clicked()
{
    this->fileNames.clear();

    this->ui->tedContent->clear();
}
