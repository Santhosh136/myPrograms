#include<iostream>
using namespace std;

class Sample
{
public:
	Sample(){
		cout<<"Constructor is called for object"<<endl;
	}
	~Sample(){
		cout<<"Destructor is called"<<endl;
	}
	
};

int main()
{
	cout<<"Creating object 1"<<endl;
	Sample s1;
	{
		cout<<"Creating object 2"<<endl;
		Sample s2;	
		{
			cout<<"Creating object 3"<<endl;
			Sample s3;
			cout<<"Deleting object 3"<<endl;
		}
		cout<<"Deleting object 2"<<endl;
	}
	cout<<"Deleting object 1"<<endl;
	return 0;
}
