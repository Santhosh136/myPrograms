#include<iostream>
using namespace std;

class A
{
	int a = 10;
public:
	void show()
	{
		cout<<"A:"<<a<<endl;
	}
};

class B
{
	int b = 20;
public:
	void show()
	{
		cout<<"B:"<<b<<endl;
	}
};

class C:public A,public B
{
	int c = 30;
public:
	void show()
	{
		cout<<"C:"<<c<<endl;
	}
};

int main()
{
	C c1;
	c1.show();
	c1.A::show();
	c1.B::show();
	return 0;
}