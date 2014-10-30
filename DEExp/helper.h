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
    static void writeToFile(QString text, QString fileName);
    static QString ymdhisString(QDateTime dt);
};

#endif // HELPER_H
