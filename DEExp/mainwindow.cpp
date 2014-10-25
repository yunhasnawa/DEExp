#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include "readdatadialog.h"
#include "writedatadialog.h"
#include "fileoperationdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRead_Data_triggered()
{
    ReadDataDialog* dlgReadData = new ReadDataDialog();

    dlgReadData->setWindowTitle("Read Data");
    dlgReadData->show();
}

void MainWindow::on_actionWrite_Data_triggered()
{
    WriteDataDialog* dlgWriteData = new WriteDataDialog();

    dlgWriteData->setWindowTitle("Write Data");
    dlgWriteData->show();
}

void MainWindow::on_actionFile_Operation_triggered()
{
    FileOperationDialog* dlgFileOperation = new FileOperationDialog();

    dlgFileOperation->setWindowTitle("File Operation");
    dlgFileOperation->show();
}
