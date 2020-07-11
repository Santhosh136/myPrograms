#include<iostream>
using namespace std;
class car
{
	private:
	int modelno;
	char model[20];
	public:
	void getdata()
	{
			cout<<"Enter the car model no and name:"<<endl;
			cin>>modelno>>model;
	}
	void display()
	{
			cout<<"The car model no is "<<modelno<<" and the name is "<<model<<endl;
	}
};

int main()
{
	car c1;
	c1.getdata();
	c1.display();
}
