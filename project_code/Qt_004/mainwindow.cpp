#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));//�քӽ���slot/signal�C�� add at 2017/03/24 by jash

    //disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));//�քӽ��slot/signal�C�� add at 2017/03/24 by jash
}

MainWindow::~MainWindow()
{
    delete ui;
}
