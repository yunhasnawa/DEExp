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

private:
    Ui::WriteDataDialog *ui;
};

#endif // WRITEDATADIALOG_H
