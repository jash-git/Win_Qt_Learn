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
    this->setCentralWidget(ui->plainTextEdit);//��һ��Ԫ���O��QMainWindow�ľ�݋�^��add at 2017/03/28 by jash.liao
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Windows_triggered()//TOOL �a��
{
    QMessageBox::information(NULL, "Title", "Content", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);//add at 2017/03/28 by jash.liao
    /*
    //������Ԓ��~����һ��add at 2017/03/28 by jash.liao
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
    //*/

    //*
    //������Ԓ��~��������add at 2017/03/28 by jash.liao
    pdialog=new Dialog(this);
    pdialog->show();
    //*/
}
