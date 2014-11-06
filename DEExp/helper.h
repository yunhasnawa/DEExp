#ifndef HELPER_H
#define HELPER_H

#include "qstring.h"
#include "qdatetime.h"

class Helper
{
public:
    Helper();
    static QString findStringAtIndex(QString haystack, int needle);
    static int generateRandomBetween(int from, int to);
    static QString ymdhisString(QDateTime dt);
    static int baselog(double base, double x);
    static bool fileExists(QString fileName);
    static QList<double> generateNumberList(double from, double to);
    static QList<double> randomizeNumberList(QList<double> numberList);
    static QString serializeNumberList(QList<double> numberList);
};

#endif // HELPER_H
