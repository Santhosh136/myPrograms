#include<iostream>
using namespace std;

class Animal
{
public:
	// virtual void sound()=0; pure virtual function
	virtual void sound()
	{
		cout<<"Animals sound"<<endl;
	}
};

class Cat:public Animal{
public:
	void sound()
	{
		cout<<"Cats meow"<<endl;
	}
};

class Dog:public Animal{
public:
	void sound()
	{
		cout<<"Dogs bark"<<endl;
	}
};

int main()
{
	Animal *p;
	Cat c;
	p = &c; 
	p->sound();
	return 0;
}