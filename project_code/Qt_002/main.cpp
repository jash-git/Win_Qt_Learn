#include <QtCore/QCoreApplication>

#include <QDebug> //add at 2017/03/23 by jash.liao

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Hello World\nHello Qt4.7";//add at 2017/03/23 by jash.liao

    return a.exec();
}
