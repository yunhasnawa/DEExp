#ifndef READDATAAUTODIALOG_H
#define READDATAAUTODIALOG_H

#include <QDialog>
#include "engine.h"

namespace Ui {
class ReadDataAutoDialog;
}

class ReadDataAutoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReadDataAutoDialog(QWidget *parent = 0);
    ~ReadDataAutoDialog();

private slots:
    void on_pbtLookup_clicked();
    void on_pbtAutoRead_clicked();
    void initProperties();
    void retrieveDataFromUI();

private:
    Ui::ReadDataAutoDialog *ui;
    Engine* engine;
    QStringList fileNames;
    QString serializedFileNames();
    void performAutoRead();
    void logTedLn(FileTime ft);
};

#endif // READDATAAUTODIALOG_H
