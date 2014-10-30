#ifndef FILEOPERATIONDIALOG_H
#define FILEOPERATIONDIALOG_H

#include <QDialog>

namespace Ui {
class FileOperationDialog;
}

class FileOperationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FileOperationDialog(QWidget *parent = 0);
    ~FileOperationDialog();

private slots:
    void on_pbtLookup_clicked();

    void on_pbtOpen_clicked();

    void on_pbtGenerate_clicked();

private:
    Ui::FileOperationDialog *ui;
    QString fileName;
    QString fileContent;
    double totalTime;
    bool isNew;
    void fillDataToUI();
    void detectFileNameChange();
};

#endif // FILEOPERATIONDIALOG_H
