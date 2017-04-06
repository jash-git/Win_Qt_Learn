#include <QApplication>
#include <QtGui>
#include <QTCore>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QWidget *windows=new QWidget;
    windows->setWindowTitle("Qt_009");

    ///
    QGridLayout *Layout = new QGridLayout;

    QLabel *Label_01=new QLabel("Name");
    QLineEdit *LineEdit_01=new QLineEdit;

    QLabel *Label_02=new QLabel("Name");
    QLineEdit *LineEdit_02=new QLineEdit;

    QPushButton *Button_01=new QPushButton("OK");

    Layout->addWidget(Label_01,0,0);//y,x
    Layout->addWidget(LineEdit_01,0,1);//y,x
    Layout->addWidget(Label_02,1,0);//y,x
    Layout->addWidget(LineEdit_02,1,1);//y,x
    Layout->addWidget(Button_01,2,0,1,2);//y,x,y_width,x_width
    windows->setLayout(Layout);
    ///

    windows->show();
    return app.exec();
}
