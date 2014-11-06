#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionRead_Data_triggered();

    void on_actionWrite_Data_triggered();

    void on_actionFile_Operation_triggered();

    void on_actionRead_Data_Auto_triggered();

    void on_actionWrite_Data_Auto_triggered();

    void on_pbWriteData_clicked();

    void on_pbReadData_clicked();

    void on_pbFileOps_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
