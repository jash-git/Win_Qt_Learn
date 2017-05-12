#include <QtCore/QCoreApplication>  
#include <Qthread>  
#include <QTextStream>  
#include <QMutex> 
 
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
QMutex mutex;  
int number=6;  

void MyThreadA::run()
{    
	mutex.lock();  
		number *= 5;  
		sleep(1);  
		number /= 4;  
	mutex.unlock();  
}    
void MyThreadB::run()
{  
	mutex.lock();  
		number *= 3;  
		sleep(1);  
		number /= 2;  
	mutex.unlock();  
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
	out<<number;  

	return app.exec();  
} 
/*
url:http://blog.csdn.net/mznewfacer/article/details/6966752#

運行結果：
number=10;

通過實驗結果可以看出，QMutex保護了全域變數，同一時間只有一個執行緒可以訪問它。

只得一提的是tryLock()的使用，若以上代碼換為mutex.tryLock();那麼執行結果可能為11，因為是試圖鎖定互斥量。如果鎖被得到，這個函數返回真。如果另一個進程已經鎖定了這個互斥量，這個函數返回假，而不是一直等到這個鎖可用為止。

且不能添上sleep()函數，否則提示 "A mutex must be unlocked in the same thread that locked it."的運行錯誤。

*/