#include<iostream>
using namespace std;

template<class T,int size>
class array
{
	T a[size];
public:
	array()
	{
		for(int i=0;i<size;i++)
		{
			a[i]=i+97;
		}
	}
	void show()
	{
		for(int i=0;i<size;i++)
		{
			cout<<a[i]<<endl;
		}
	}
};

int main()
{
	array <char,10>a;
	a.show();
	return 0;
}