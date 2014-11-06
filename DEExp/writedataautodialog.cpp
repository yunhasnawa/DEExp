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

    this->generateContentList();
    this->performAutoWrite();
}

void WriteDataAutoDialog::retrieveDataFromUI()
{
    this->mainSize      = this->ui->ldtByteMainSize->text().toInt();
    this->powerSizeFrom = this->ui->ldtBytePowerSizeFrom->text().toInt();
    this->powerSizeTo   = this->ui->ldtBytePowerSizeTo->text().toInt();

    this->retrieveByteSizeList();
}

void WriteDataAutoDialog::retrieveByteSizeList()
{
    for(int i = this->powerSizeFrom; i <= this->powerSizeTo; i++)
    {
        double size = qPow(this->mainSize, i);

        this->byteSizeList.append(size);
    }
}

void WriteDataAutoDialog::generateContentList()
{
    this->logTedLn("<br/><b>Generating file contents. Please wait...</b>");

    for(int i = 0; i < this->byteSizeList.count(); i++)
    {
        double size = this->byteSizeList.at(i);

        FileTime ft = this->engine->ftGenerateRandomText(size);

        this->contentList.append(ft.fileContent);

        QString log = "Content created -> " + ft.kbSizeString() + " kB in: " + ft.msContentGenerationString() + " Microseconds";

        this->logTedLn(log);
    }
}

void WriteDataAutoDialog::performAutoWrite()
{
    this->logTedLn("<br/><b>Writing to disk...</b>");

    for(int i = 0; i < this->contentList.count(); i++)
    {
        QString tag = QString::number(i);

        QString defaultFileName = Engine::instance()->generateFileName(tag);

        QString content = this->contentList.at(i);

        FileTime ft = this->engine->writeToFile(content, defaultFileName);

        this->logTedLn(ft);
    }
}

void WriteDataAutoDialog::logTedLn(QString text)
{
    this->ui->tedContent->append(text);
}

void WriteDataAutoDialog::logTedLn(FileTime ft)
{
    QString fileName = ft.fileName;
    QString totalTime = QString::number(ft.writeTime / 1000);

    QString text = fileName + " -> " + totalTime + " Microseconds";

    this->ui->tedContent->append(text);
}

void WriteDataAutoDialog::on_pbtClear_clicked()
{
    this->contentList.clear();
    this->byteSizeList.clear();

    this->ui->tedContent->clear();
}
