#ifndef READDATAAUTODIALOG_H
#define READDATAAUTODIALOG_H

#include <QDialog>

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

private:
    Ui::ReadDataAutoDialog *ui;
};

#endif // READDATAAUTODIALOG_H
