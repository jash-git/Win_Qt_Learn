#include <QtCore/QCoreApplication>  
#include <Qthread>  
#include <QTextStream>
 
class MyThreadA : public QThread 
{    
	public:      
		virtual void run();    
};    

class MyThreadB: public QThread
{    
	public:      
		virtual void run();    
};  

int number=6;  

void MyThreadA::run()
{    
	number *= 5;  
	number /= 4;  
}
    
void MyThreadB::run()
{  
	number *= 3;  
	number /= 2;  
}   
int main(int argc, char *argv[])  
{     
	QCoreApplication app(argc, argv);
	
	MyThreadA a;    
	MyThreadB b;    

	a.run();  
	b.run();
	
	a.terminate();  
	b.terminate();  

	QTextStream out(stdout);  
	out<<number;  

	return app.exec();  
} 
/*
url:http://blog.csdn.net/mznewfacer/article/details/6966752#
上述代碼，很簡單，寫了兩個執行緒，覆蓋了QThread的純虛函數run()，這兩個重構的run方法都是對全域變數number的操作，
主函數中順序調用這兩個方法，a.run()執行後number為7,b.run()執行後為10。
*/