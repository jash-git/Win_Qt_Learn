#include <QtCore/QCoreApplication>
#include <QFile>
#include <QTextSTream>
#include <iostream>
#include <QString>
#include <cstdio>

using namespace std;

void Pause()
{
    printf("Press Enter key to continue...");
    fgetc(stdin);
}
int main(int argc, char *argv[])
{
    //--Pause()È¡´ú QCoreApplication a(argc, argv);

    std::cout<<"HELLO Qt_013\n--------------------------------\n";
    QString src(":/Qrc_Path/main.cpp");

    QFile file(src);

    if (!file.open(QIODevice::ReadOnly)) {
        cerr << "Cannot open file for reading:"
             << qPrintable(file.errorString()) << endl;

        return false;
    }

    QTextStream in(&file);

    while (!in.atEnd()) {
        cout << qPrintable(in.readLine()) << endl;
    }

    in.flush();
    file.close();
    Pause();
    return 1;//return a.exec();
}
