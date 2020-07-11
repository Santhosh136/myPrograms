#include<iostream>
using namespace std;

template<class T>
void maximum(T a,T b)
{
	if(a>b)
		cout<<a<<" is greater"<<endl;
	else
		cout<<b<<" is greater"<<endl;
}

int main()
{
	maximum(10,33);
	maximum(123.44,45.211);
	maximum('a','b');
	return 0;
}

