#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "readdatadialog.h"
#include "qdebug.h"

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
