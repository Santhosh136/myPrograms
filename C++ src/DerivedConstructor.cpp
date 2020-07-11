#include<iostream>
using namespace std;

class A
{
	int a;
public:
	A(int x)
	{
		a=x;
	}
	void show_A()
	{
		cout<<"Class A:"<<a<<endl;
	}
};

class B
{
	float b;
public:
	B(float x)
	{
		b=x;
	}
	void show_B()
	{
		cout<<"Class B:"<<b<<endl;
	}
};

class C:public A,public B{
	double c;
public:
	C(int a,float b,double x):A(a),B(b)
	{
		c=x;
	}
	void show_C()
	{
		cout<<"Class C:"<<c<<endl;
	}
};

int main()
{
	C c1(12,23.34f,23.2222);
	c1.show_A();
	c1.show_B();
	c1.show_C();
	return 0;
}