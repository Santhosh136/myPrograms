#include<iostream>
using namespace std;

class A
{
protected:
	int a=10;
public:
	void show_A()
	{
		cout<<"Value of a :"<<a<<endl;
	}
};

class B:public A
{
protected:
	int b= 20;
public:
	void show_B()
	{
		cout<<"Value of b :"<<b<<endl;
	}
};

class C:public A
{
protected:
	int c = 30;
public:
	void show_C()
	{
		cout<<"Value of c :"<<c<<endl;
	}
};

class D:public C
{
protected:
	int d = 40;
public:
	void show_D()
	{
		cout<<"Value of d :"<<d<<endl;
	}
};

int main()
{
	B b1;
	D d1;
	d1.show_A();
	b1.show_B();
	d1.show_C();
	d1.show_D();
	return 0;
}
