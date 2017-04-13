//資料來源:https://openhome.cc/Gossip/Qt4Gossip/QTextStream.html
#include <QFile>
#include <QTextSTream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {  
    QFile file("data.txt");
    
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        cerr << "Cannot open file for writing:"
             << qPrintable(file.errorString()) << endl;
        
        return false;
    }
    
    QTextStream out(&file);
    
    out << "name\tscore" << endl;
    out << "justin\t" << 95 << endl;
    out << "momor\t" << 93 << endl;
    out << "minnie\t" << 93 << endl;
    
    return true;
}