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
	sleep(1);  
	number /= 4;  
}   
 
void MyThreadB::run()
{  
	number *= 3;  
	sleep(1);  
	number /= 2;  
} 
  
int main(int argc, char *argv[])  
{     
	QCoreApplication app(argc, argv); 
	
	MyThreadA a;    
	MyThreadB b; 
	
	a.start();  
	b.start(); 
	
	a.wait();    
	b.wait();
	
	QTextStream out(stdout);  
	out<<number；  
	return app.exec();  
} 
/*
url:http://blog.csdn.net/mznewfacer/article/details/6966752#
運行結果：
number=11;

利用QThread的方法start()同是開啟兩個執行緒，值得注意的是wait()函數，不能等待自己，這個是用來多個執行緒交互的，所以不能當sleep()用。這個函數是在主執行緒中被調用的時候阻塞了主執行緒。如果想在外部讓子執行緒暫停，最好的辦法是在子執行緒中設置一個標誌，在主執行緒中更改這個標誌，並在子執行緒的run函數中判斷，通過調用其保護函數sleep()來達到暫停的目的了。

*/  