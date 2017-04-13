//資料來源:https://openhome.cc/Gossip/Qt4Gossip/QTextStream.html
#include <QFile>
#include <QTextSTream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    QString src(argv[1]);
    
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

    return true;
}