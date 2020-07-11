#include<iostream>
using namespace std;

class A
{
	int a;
public:
	A(int a)
	{
		cout<<"Constructor of A:"<<a<<endl;
	}
	~A()
	{
		cout<<"Destructor of A"<<endl;
	}
};

class B
{
	float b;
public:
	B(float b)
	{
		cout<<"Constructor of B:"<<b<<endl;
	}
	~B()
	{
		cout<<"Destructor of B"<<endl;
	}
};

class C:public A,public B
{
	double c;
public:
	C(int a,float b,double c):A(a),B(b)
	{
		cout<<"Constructor of C:"<<c<<endl;
	}
	~C()
	{
		cout<<"Destructor of C"<<endl;
	}
};

int main()
{
	C *ptr=new C(23,12.8f,56.88989);
	delete ptr;
	return 0;
}