#include "filetime.h"

FileTime::FileTime()
{
    this->fileName = "";
    this->fileContent = "";
    this->writeTime = 0;
    this->readTime = 0;
    this->contentGenerationTime = 0;
}

QString FileTime::writeTimeString()
{
    QString wtString = QString::number(this->writeTime);

    return wtString;
}

QString FileTime::msWriteTimeString()
{
    QString wtString = QString::number(this->writeTime / 1000);

    return wtString;
}

QString FileTime::readTimeString()
{
    QString rtString = QString::number(this->readTime);

    return rtString;
}

QString FileTime::msReadTimeString()
{
    QString rtString = QString::number(this->readTime / 1000);

    return rtString;
}

QString FileTime::contentGenerationTimeString()
{
    QString cgtString = QString::number(this->contentGenerationTime);

    return cgtString;
}

double FileTime::size()
{
    return this->fileContent.length();
}

QString FileTime::kbSizeString()
{
    return QString::number(this->size() / 1000);
}

QString FileTime::msContentGenerationString()
{
    return QString::number(this->contentGenerationTime / 1000);
}

