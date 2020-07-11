#include<iostream>
using namespace std;

class Complex
{
	int real,img;
public:
	void get()
	{
		cout<<"Enter real and imaginary parts:"<<endl;
		cin>>real>>img;
	}
	void put()
	{
		cout<<real<<"+j"<<img<<endl;
	}
	Complex operator+(Complex c1)
	{
		Complex t;
		t.real = real+c1.real;
		t.img = img+c1.img;
		return t;
	}
};

int main()
{
	Complex c1,c2,c3;
	c1.get();
	c1.put();
	c2.get();
	c2.put();
	c3 = c1+c2;
	cout<<"The sum is:";
	c3.put();
	return 0;
}