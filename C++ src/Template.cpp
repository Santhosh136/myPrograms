#include<iostream>
#include<string>
using namespace std;

template <class T>
void sum(T a,T b)
{
	cout<<"The sum is "<<a+b<<endl;
}

int main()
{
	int a,b;
	float c,d;
	char e,f;
	cout<<"Hello There!!!";
	
	cout<<"Enter two integers:";
	cin>>a>>b;
	sum(a,b);
	
	cout<<"Enter two floating point numbers:";
	cin>>c>>d;
	sum(c,d);
	
	cout<<"Enter two characters:";
	cin>>e>>f;
	sum(e,f);
	
	string str1,str2;
	cin>>str1>>str2;
	sum(str1,str2);
}
