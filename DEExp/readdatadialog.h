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

private:
    Ui::ReadDataDialog *ui;
};

#endif // READDATADIALOG_H
