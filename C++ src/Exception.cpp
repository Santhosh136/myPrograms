#include<iostream>
using namespace std;

void mul(int a,int b)
{
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<"Answer is:"<<a/b<<endl;
		}
	}
	catch(int b)
	{
		cout<<"Throwing to main.."<<endl;
		throw(b);
	}
}

int main()
{
	int a,b;
	cout<<"Enter two numbers for division:"<<endl;
	cin>>a>>b;
	try
	{
		// if(b==0)
		// {
		// 	throw b;
		// }
		// else
		// {
		// 	cout<<"Answer is:"<<a/b<<endl;
		// }

		mul(a,b);
	}
	catch(int b)
	{
		cout<<"Denominator is:"<<b<<endl;
		cout<<"Cannot do division"<<endl;
	}	
	return 0;
}