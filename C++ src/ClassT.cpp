#include<iostream>
using namespace std;

template <class T>
class Number
{
	T t;
public:
	void setdata(T a)
	{
		t=a;
	}
	T putdata()
	{
		return t;
	}
};

int main()
{
	Number<int> n1;
	cout<<"Calling with integer:"<<endl;
	n1.setdata(3);
	cout<<n1.putdata()<<endl;
	Number<double> n2;
	cout<<"Calling with double:"<<endl;
	n2.setdata(3.34);
	cout<<n2.putdata()<<endl;
	Number<char> n3;
	cout<<"Calling with character:"<<endl;
	n3.setdata('A');
	cout<<n3.putdata()<<endl;
	return 0;
}