#include<iostream>
using namespace std;

class Complex
{
	private: 
		int real,img;
	public:
		void get();
		void add(Complex,Complex);
};

int main()
{
	Complex c1,c2,c3;
	c1.get();
	c2.get();
	c3.add(c1,c2);
	return 0;
}

void Complex::get()
{
	cout<<"Enter real and imaginary parts:"<<endl;
	cin>>real>>img;
	cout<<"The complex no is: "<<real<<"+i"<<img<<endl;
}

void Complex::add(Complex c1, Complex c2)
{
	real=c1.real+c2.real;
	img=c1.img+c2.img;
	cout<<"The addition is: "<<real<<"+i"<<img<<endl;
}
