#include "engine.h"
#include "qdir.h"
#include "qdatetime.h"

#include <iostream>
#include <fstream>
#include <cstdio>

#include <QtCore>

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

FileTime Engine::ftGenerateRandomText(double size)
{
    // Start counting the time
    QElapsedTimer timer;
    timer.start();

    // Generate random text
    QString randomText = Engine::generateRandomText(size);

    // Stop the timer
    qint64 nanosecs = timer.nsecsElapsed();

    FileTime ft;

    ft.fileContent = randomText;
    ft.contentGenerationTime = nanosecs;

    return ft;
}

QList<QString> Engine::generateMultiRandomText(QList<double> sizes)
{
    QList<QString> multiText;

    for(int i = 0; i < sizes.count(); i++)
    {
        double size = sizes.at(i);

        QString randomText = Engine::generateRandomText(size);

        multiText.append(randomText);
    }

    return multiText;
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

QStringList Engine::lookupFiles(QWidget* owner)
{
    QFileDialog dialog(owner);

    dialog.setDirectory(this->defaultDirectory);
    dialog.setWindowTitle(tr("Open a Data Engineering File"));
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(tr("Data Engineering Files (*.dxt)"));

    QStringList fileNames;

    if (dialog.exec())
        fileNames = dialog.selectedFiles();

    return fileNames;
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

    ft.fileName = fileName;

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

FileTime Engine::randomReadFile(QString fileName, bool randomAccess)
{
    FileTime ft;

    std::ifstream is (fileName.toStdString().c_str(), std::ifstream::binary);

    QString content = "";

    if(is)
    {
        is.seekg(0, is.end);
        double size = is.tellg();

        qDebug() << QString::number(size);

        QList<double> indexes = Helper::generateNumberList(0, size - 1);

        if(randomAccess)
        {
            indexes = Helper::randomizeNumberList(indexes);
        }

        for(int i = 0; i < indexes.count(); i++)
        {
            double now = indexes.at(i);

            is.seekg (now, is.beg);

            qDebug() << now;

            char* bitBuffer = new char[2];

            is.read(bitBuffer, 1);

            //qDebug() << bitBuffer;

            content += bitBuffer;

            std::cout.write(bitBuffer, 1);

            delete[] bitBuffer;

            //qDebug() << "tes";
        }

        is.close();
    }
    /*
    if (is)
    {
        // get length of file:
        is.seekg (0, is.end);
        int length = is.tellg();
        is.seekg (0, is.beg);

        // allocate memory:
        char * buffer = new char [length];

        // read data as a block:
        is.read (buffer,length);

        is.close();

        // print content:
        std::cout.write (buffer,length);

        delete[] buffer;
      }

      return 0;
    */
    ft.fileContent = content;

    return ft;
}

FileTime Engine::writeFile(QString text, QString fileName, bool randomAccess)
{
    fileName = this->defaultDirectory + fileName;

    std::ofstream outfile;

    outfile.open(fileName.toStdString().c_str());

    const char* textChar = text.toStdString().c_str();

    QList<double> indexList = Helper::generateNumberList(0, text.length());

    if(randomAccess)
    {
        indexList = Helper::randomizeNumberList(indexList);
    }

    // Start counting the time
    QElapsedTimer timer;
    timer.start();

    // Writes file

    for(int i = 0; i < indexList.count(); i++)
    {
        long now = indexList.at(i);

        const char* c = &textChar[now];

        outfile.seekp(now);

        outfile.write(c, 1);
    }

    outfile.close();

    // Stop the timer
    qint64 nanosecs = timer.nsecsElapsed();

    FileTime ft;

    ft.fileName = fileName;
    ft.writeTime = nanosecs;

    return ft;
}
