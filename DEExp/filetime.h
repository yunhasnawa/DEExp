#ifndef FILETIME_H
#define FILETIME_H

#include "qstring.h"

struct FileTime
{
public:
    explicit FileTime();
    QString fileName;
    double writeTime;
    QString fileContent;
    double readTime;
};

#endif // FILETIME_H
