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
    void retrieveByteSizes();
    void performAutoWrite();

private:
    Ui::WriteDataAutoDialog *ui;
    qint32 mainSizeFrom;
    qint32 powerSizeFrom;
    qint32 mainSizeTo;
    qint32 powerSizeTo;
    qint32 byteSizeFrom;
    qint32 byteSizeTo;
    Engine* engine;
};

#endif // WRITEDATAAUTODIALOG_H
