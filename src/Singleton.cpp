//饿汉模式
#include "Prefix_Test.h"
//#include "pthread.h"
#include "iostream"
class MSingleton
{
public:
	static MSingleton* getInstance()
	{
		return p;
	}
private:
	MSingleton(){}
	static MSingleton* p;

};
MSingleton* MSingleton::p = new MSingleton();

//懒汉模式
/*class CSingleton
{
private:
	CSingleton() { pthread_mutex_init(&mtx, 0); }
public:
	static pthread_mutex_t mtx;
	static CSingleton* getInstance()
	{
		pthread_mutex_lock(&mtx);
		static CSingleton obj;
		pthread_mutex_unlock(&mtx);
		return &obj;
	}
};
pthread_mutex_t CSingleton::mtx;*/


class Singleton {
public:
	static Singleton *instance();
private:
	Singleton();
	virtual ~Singleton();
	Singleton(const Singleton&) {};
	Singleton& operator=(const Singleton&) {};
private:
	static Singleton m_instance;
};


Singleton Singleton::m_instance;

Singleton::Singleton()
{
	std::cout << "contructure funcation" << std::endl;
}

Singleton::~Singleton()
{
	std::cout << "deconstructure funcation" << std::endl;
}

Singleton *Singleton::instance()
{
	return &m_instance;
}
