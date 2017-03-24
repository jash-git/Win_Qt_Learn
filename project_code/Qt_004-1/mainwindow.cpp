#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //add at 2017/03/24 by jash
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    //
}

MainWindow::~MainWindow()
{
    delete ui;
}
//add at 2017/03/24 by jash
void MainWindow::slotValueChange(int Value)
{
    ui->progressBar->setValue(Value);
    ui->progressBar_2->setValue(Value);
}
//
