#include "filetime.h"

FileTime::FileTime()
{
    this->fileName = "";
    this->fileContent = "";
    this->writeTime = 0;
    this->readTime = 0;
}

QString FileTime::writeTimeString()
{
    QString wtString = QString::number(this->writeTime);

    return wtString;
}
