#include "helper.h"
#include "math.h"
#include "qfile.h"

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

int Helper::baselog(double base, double x)
{
    return (int) (log(x)/log(base));
}

bool Helper::fileExists(QString fileName)
{
    QFile file(fileName);

    if(file.exists())
    {
        return true;
    }
    else
    {
        return false;
    }
}

QList<double> Helper::generateNumberList(double from, double to)
{
    QList<double> numberList;

    for(int i = from; i <= to; i++)
    {
        numberList.append(i);
    }

    return numberList;
}

QList<double> Helper::randomizeNumberList(QList<double> numberList)
{
    double n = numberList.count();

    QList<double> resultList;

    while (n > 0)
    {
        double random = Helper::generateRandomBetween(0, n-1);

        double selectedNumber = numberList.at(random);

        resultList.append(selectedNumber);

        numberList.replace(random, numberList.at(n-1));

        --n;
    }

    return resultList;
}

QString Helper::serializeNumberList(QList<double> numberList)
{
    QString log = "";

    for(int i = 0; i < numberList.count(); i++)
    {
        log += QString::number(numberList.at(i));
    }

    return log;
}
