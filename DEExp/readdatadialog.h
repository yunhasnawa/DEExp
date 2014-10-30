#ifndef READDATADIALOG_H
#define READDATADIALOG_H

#include <QDialog>

namespace Ui {
class ReadDataDialog;
}

class ReadDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReadDataDialog(QWidget *parent = 0);
    ~ReadDataDialog();

private slots:
    void on_pbtLookup_clicked();

    void on_pbtRead_clicked();

private:
    Ui::ReadDataDialog *ui;
    QString fileName;
    double dataSize;
    int mainDataSize;
    int powerDataSize;
    QString fileContent;
    double totalTime;
    void fillDataToUI();
};

#endif // READDATADIALOG_H
