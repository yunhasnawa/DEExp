#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include "helper.h"
#include "filetime.h"
#include "qelapsedtimer.h"

class Engine : public QObject
{
    Q_OBJECT
public:
    explicit Engine(QObject *parent = 0);
    static Engine* instance();
    QString generateRandomText(double size);
    FileTime writeToFile(QString text, QString fileName);
    QString generateFileName(QString tag);
    QString randomSeed;

private:
    void performInitialProcess();
    void initProperties();
    void checkDefaultDirectory();
    static Engine* _instance;
    QString defaultDirectory;
    QString fileNamePrefix;
    QString fileExtension;

signals:

public slots:

};

#endif // ENGINE_H
