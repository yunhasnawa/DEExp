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

private:
    Ui::FileOperationDialog *ui;
};

#endif // FILEOPERATIONDIALOG_H
