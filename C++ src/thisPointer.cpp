#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
public:
	void get(string s,int a)
	{
		name = s;
		age = a;
	}
	void put()
	{
		cout<<"Name:"<<name<<endl
		<<"Age:"<<age<<endl;
	}
	person older(person p)
	{
		if(age<p.age)
		{
			return p;
		}
		else
			return *this;
	}
};

int main()
{
	person p1,p2,p3;
	p1.get("Santhosh",20);
	p2.get("Sibi",2);
	p3 = p1.older(p2);
	p3.put();
	return 0;
}