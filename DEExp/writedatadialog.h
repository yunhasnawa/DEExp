#ifndef WRITEDATADIALOG_H
#define WRITEDATADIALOG_H

#include <QDialog>

namespace Ui {
class WriteDataDialog;
}

class WriteDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WriteDataDialog(QWidget *parent = 0);
    ~WriteDataDialog();

private slots:
    void on_pbtGenerate_clicked();
    void initializeProperties();
    void retrieveDataFromUI();
    void retrieveActualBytesSize();
    void retrieveGeneratedContent();
    void on_pbtWriteToDisk_clicked();

private:
    Ui::WriteDataDialog *ui;
    //QString randomSeed;
    QString mainSizeString;
    QString powerSizeString;
    QString generatedContent;
    int totalTime;
    double actualBytesSize;
};

#endif // WRITEDATADIALOG_H
