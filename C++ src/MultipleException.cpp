#include<iostream>
using namespace std;

void test(int a) throw(int,char)
{
		if(a==0)
		{
			throw 1;
		}
		else if(a==1)
		{
			throw 1.22;
		}
		else if(a==2)
		{
			throw 'a';
		}
		else
		{
			throw(12.34f); //floating point number
		}
	
}

int main()
{
	try{
		test(0);
		test(1);
		test(2);
		test(4);
	}
	catch(int x)
	{
		cout<<"Caught a integer"<<endl;
		// throw;
	}
	catch(char x)
	{
		cout<<"Caught a character"<<endl;
		// throw;
	}
	catch(double x)
	{
		cout<<"Caught a double"<<endl;
		// throw;
	}
	
	catch(...)
	{
		cout<<"Deafult "<<endl;
		// throw;
	}
}
