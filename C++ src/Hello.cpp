#include<iostream>
using namespace std;
int main()
{
	int a;
	enum{ sun=1,mon,tue,wed,thu,fri,sat
	};
	do{
	cout<<"Enter 1 to 7 for Days"<<endl;
	cin>>a;
	cout<<endl;
	switch(a)
	{
		case sun:cout<<"Sunday";break;
		case mon:cout<<"Monday";break;
		case tue:cout<<"Tuesday";break;
		case wed:cout<<"Wednesday";break;
		case thu:cout<<"Thursday";break;
		case fri:cout<<"Friday";break;
		case sat:cout<<"Saturday";break;
		default : cout<<"Invalid Option";
	}
	}while(a<8);
}
