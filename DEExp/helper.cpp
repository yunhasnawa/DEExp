#include "helper.h"

Helper::Helper()
{
}

QString Helper::findStringAtIndex(QString haystack, int needle)
{
    std::string stdString = haystack.toStdString();

    char at = stdString[needle];

    QString element = QString(at);

    return element;
}

int Helper::generateRandomBetween(int from, int to)
{
    return (qrand() % ((to + 1) - from) + from);
}

void Helper::writeToFile(QString text, QString fileName)
{

}

QString Helper::ymdhisString(QDateTime dt)
{
    QString y = QString::number(dt.date().year());
    QString m = QString::number(dt.date().month());
    QString d = QString::number(dt.date().day());
    QString h = QString::number(dt.time().hour());
    QString i = QString::number(dt.time().minute());
    QString s = QString::number(dt.time().second());

    QString ymdhis = y + m + d + h + i + s;

    return ymdhis;
}
