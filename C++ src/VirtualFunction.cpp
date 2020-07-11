#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void sound()
	{
		cout<<"Animals sound"<<endl;
	}
};

class Dog:public Animal
{
public:
	void sound()
	{
		cout<<"Dogs bark"<<endl;
	}
};

class Cat:public Animal{
public:
	void sound()
	{
		cout<<"Cats meow"<<endl;
	}
};


int main()
{
	Animal *ap;
	cout<<"Assinging base class pointer to cat class"<<endl;
	ap = new Cat;
	ap->sound();
	cout<<"Assinging base class pointer to dog class"<<endl;
	ap = new Dog;
	ap->sound();
	return 0;
}