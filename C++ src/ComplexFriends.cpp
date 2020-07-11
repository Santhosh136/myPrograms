#include<iostream>
using namespace std;

class Complex
{
	int r,i;
public:
	void get(int a,int b)
	{
		r=a;
		i=b;
	}
	void put()
	{
		cout<<"The complex number is:"<<r<<"+i"<<i<<endl;
	}
	friend void add(Complex&,Complex&);
	friend void sub(Complex&,Complex&);
};


void add(Complex &x,Complex &y)
{
	Complex temp;
	temp.r = x.r + y.r;
	temp.i = x.i + y.i;
	cout<<"The addition is:"<<temp.r<<"+i"<<temp.i<<endl;
}

void sub(Complex &x,Complex &y)
{
	Complex temp;
	temp.r = x.r - y.r;
	temp.i = x.i - y.i;
	cout<<"The addition is:"<<temp.r<<"-i"<<temp.i<<endl;
}

int main()
{
	Complex c1,c2;
	c1.get(3,4);
	c2.get(1,2);
	add(c1,c2);
	sub(c1,c2);
	return 0;
}