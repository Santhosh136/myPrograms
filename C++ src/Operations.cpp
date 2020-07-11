#include<iostream>
using namespace std;

class Operations
{
	private:
		float a,b;
	public:
		void getdata();
		void display();
		int calculation();
};

int main()
{
	Operations a1;
	a1.getdata();
	a1.display();
}

void Operations::getdata()
{
	cout<<"Enter the numbers:"<<endl;
	cin>>a>>b;
}

int Operations::calculation()
{
	int choice;
	cout<<"Enter 1.Add 2.Sub 3.Mul 4.Div 5.Mod :";cin>>choice;
	switch(choice)
	{
		case 1:return a+b;break;
		case 2:return a-b;break;
		case 3:return a*b;break;
		case 4:return a/b;break;
		case 5:return (int)a%(int)b;break;
		default: cout<<"Invalid option";
	}
}

void Operations::display()
{
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
	cout<<"The result is "<<calculation();
}
