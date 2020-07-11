#include<iostream>
using namespace std;

class Account
{
	private:
		int accno;
		float balance;
		char name[20];
		char type[20];
	public:
		void getdata();
		void check();
		void deposit();
		void withdraw();
		void display();
};

int main()
{
	Account a;
	a.getdata();
	a.deposit();
	a.withdraw();
	a.check();
	a.display();
}

void Account::getdata()
{
	cout<<"Enter the Account Number, Name and Type of Account:"<<endl;
	cin>>accno>>name>>type;
}

void Account::deposit()
{
	float x;
	cout<<"Enter the Amount to be Deposited:";
	cin>>x;
	balance+=x;
}

void Account::withdraw()
{
	float x;
	cout<<"Enter the Amount to be Withdrawn:";
	cin>>x;
	balance-=x;
}

void Account::check()
{
	cout<<"The Balance in your Account is "<<balance;
}

void Account::display()
{
	cout<<endl<<"::: ACCOUNT DETAILS :::"<<endl;
	cout<<"Account Number:"<<"\t"<<accno<<endl;
	cout<<"Name:"<<"\t\t"<<name<<endl;
	cout<<"Type:"<<"\t\t"<<type<<endl;
	cout<<"Balance:"<<"\t"<<balance;
}
