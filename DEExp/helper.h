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
};

#endif // HELPER_H
