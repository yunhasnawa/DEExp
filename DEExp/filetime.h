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
    double contentGenerationTime;
    QString writeTimeString();
    QString readTimeString();
    QString msReadTimeString();
    QString contentGenerationTimeString();
    double size();
    QString kbSizeString();
    QString msContentGenerationString();
};

#endif // FILETIME_H
