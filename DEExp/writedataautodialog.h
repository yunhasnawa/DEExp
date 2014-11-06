#ifndef WRITEDATAAUTODIALOG_H
#define WRITEDATAAUTODIALOG_H

#include <QDialog>
#include "engine.h"

namespace Ui {
class WriteDataAutoDialog;
}

class WriteDataAutoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WriteDataAutoDialog(QWidget *parent = 0);
    ~WriteDataAutoDialog();

private slots:
    void on_pbtAutoWrite_clicked();
    void initProperties();
    void retrieveDataFromUI();
    void retrieveByteSizeList();
    void generateContentList();
    void performAutoWrite();
    void logTedLn(QString text);
    void logTedLn(FileTime ft);

    void on_pbtClear_clicked();

private:
    Ui::WriteDataAutoDialog *ui;
    double mainSize;
    double powerSizeFrom;
    double powerSizeTo;
    QList<double> byteSizeList;
    QList<QString> contentList;
    Engine* engine;
};

#endif // WRITEDATAAUTODIALOG_H
