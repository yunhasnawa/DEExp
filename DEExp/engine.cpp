#include "engine.h"
#include "qdir.h"
#include "qdatetime.h"

Engine* Engine::_instance;

Engine::Engine(QObject *parent) :
    QObject(parent)
{
    this->initProperties();
    this->performInitialProcess();
}

Engine* Engine::instance()
{
    if(_instance == NULL)
    {
        _instance = new Engine();
    }

    return _instance;
}

void Engine::initProperties()
{
    this->randomSeed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
    this->defaultDirectory = QDir::homePath().append("/DEExp/");
    this->fileNamePrefix = "file_";
    this->fileExtension = ".dxt";
}

void Engine::performInitialProcess()
{
    this->checkDefaultDirectory();
}

QString Engine::generateRandomText(double size)
{
    int randomSeedCount = this->randomSeed.count();

    QString text = "";

    for(int i = 0; i < size; i++)
    {
        int randomIndex = Helper::generateRandomBetween(0, randomSeedCount-1);

        QString element = Helper::findStringAtIndex(this->randomSeed, randomIndex);

        text.append(element);
    }

    return text;
}

void Engine::checkDefaultDirectory()
{
    QDir dir;

    if(!dir.exists(this->defaultDirectory))
    {
        dir.mkdir(this->defaultDirectory);
    }
}

FileTime Engine::writeToFile(QString text, QString fileName)
{
    fileName = this->defaultDirectory + fileName;

    QFile file(fileName);

    // Start counting the time
    QElapsedTimer timer;
    timer.start();

    // Writes file
    file.open(QIODevice::ReadWrite | QIODevice::Text);

    file.write(text.toStdString().c_str());

    file.close();

    // Stop the timer
    qint64 nanosecs = timer.nsecsElapsed();

    FileTime ft;

    ft.fileName = fileName;
    ft.writeTime = nanosecs;

    return ft;
}

QString Engine::lookupFile(QWidget* owner)
{
    QString defaultDirectory = this->defaultDirectory;

    QString fileName = QFileDialog::getOpenFileName(
                owner,
                tr("Open a Data Engineering File"),
                defaultDirectory,
                tr("Data Engineering File (*.dxt)"));

    return fileName;
}

QString Engine::generateFileName(QString tag)
{
    QString dateElement = Helper::ymdhisString(QDateTime::currentDateTime());

    QString fileName = this->fileNamePrefix + dateElement + "_" + tag + this->fileExtension;

    return fileName;
}

FileTime Engine::readFile(QString fileName)
{
    FileTime ft;

    QFile file(fileName);

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        // Start counting the time
        QElapsedTimer timer;
        timer.start();

        QTextStream textStream(&file);

        ft.fileContent = textStream.readAll();

        // Stop the timer
        qint64 nanosecs = timer.nsecsElapsed();

        ft.readTime = nanosecs;
    }

    return ft;
}
