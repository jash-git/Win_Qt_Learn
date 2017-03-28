#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>//add at 2017/03/28 by jash.liao
#include "dialog.h"//add at 2017/03/28 by jash.liao

Dialog *pdialog;//add at 2017/03/28 by jash.liao

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->plainTextEdit);//將一個元件設為QMainWindow的編輯區，add at 2017/03/28 by jash.liao
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Windows_triggered()//TOOL 產生
{
    QMessageBox::information(NULL, "Title", "Content", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);//add at 2017/03/28 by jash.liao
    /*
    //建立對話盒~方法一，add at 2017/03/28 by jash.liao
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
    //*/

    //*
    //建立對話盒~方法二，add at 2017/03/28 by jash.liao
    pdialog=new Dialog(this);
    pdialog->show();
    //*/
}
