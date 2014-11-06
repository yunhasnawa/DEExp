#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include "qmath.h"
#include "qelapsedtimer.h"
#include "qfiledialog.h"
#include "qtextstream.h"
#include "filetime.h"
#include "helper.h"

class Engine : public QObject
{
    Q_OBJECT
public:
    explicit Engine(QObject *parent = 0);
    static Engine* instance();
    QString generateRandomText(double size);
    FileTime ftGenerateRandomText(double size);
    QList<QString> generateMultiRandomText(QList<double> sizes);
    FileTime writeToFile(QString text, QString fileName);
    QString lookupFile(QWidget* owner);
    QString generateFileName(QString tag);
    FileTime readFile(QString fileName);

    // Properties
    QString defaultDirectory;
    QString randomSeed;

private:
    void performInitialProcess();
    void initProperties();
    void checkDefaultDirectory();

    // Properties
    static Engine* _instance;
    QString fileNamePrefix;
    QString fileExtension;

signals:

public slots:

};

#endif // ENGINE_H
