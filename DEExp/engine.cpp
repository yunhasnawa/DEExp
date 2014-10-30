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

    file.open(QIODevice::ReadWrite | QIODevice::Text);

    file.write(text.toStdString().c_str());

    file.close();

    FileTime ft;

    ft.fileName = fileName;

    return ft;
}

QString Engine::generateFileName(QString tag)
{
    QString dateElement = Helper::ymdhisString(QDateTime::currentDateTime());

    QString fileName = this->fileNamePrefix + dateElement + "_" + tag + this->fileExtension;

    return fileName;
}
