#include<iostream>
using namespace std;
class Student
{
	private:
		int regno;
		char *name;
		int m[5];
		float tot,avg;
		wchar_t grade;
	public:
		void getdata();
		void display();
		void calculate();
};

int main()
{
	int n;
	cout<<"Enter the no of students:";
	cin>>n;
	Student s[n];
	for(int i=0;i<n;i++)
	{
		s[i].getdata();
		s[i].calculate();
	}
	for(int i=0;i<n;i++)
		s[i].display();
}

void Student::getdata()
{
	tot=0;
	cout<<"Enter reg no and name:";
	cin>>regno;
	cin>>name;
	cout<<"Enter marks of 5 subject:"<<endl;
	for(int i;i<5;i++)		
	{
		cin>>m[i];		
	}
}

void Student::calculate()
{
	avg=tot/5;
	int flag=0;
	for(int i=0;i<5;i++)
		if(m[i]<50)
			flag=1;
	if(avg>90 && avg<=100)
		grade='S';
	else if(avg>80 && avg<=90)
		grade='A';
	else if(avg>70 && avg<=80)
		grade='B';
	else if(avg>60 && avg<=70)
		grade='C';
	else if(avg>50 && avg<=60)
		grade='D';
	else
		grade='U';
}

void Student::display()
{
	cout<<"RegNo\tName\tMark1\tMark2\tMark3\tMark4\tMark5\tTotal\tAverage\tGrade"<<endl;
	cout<<regno<<"\t"<<name<<"\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2]<<"\t"<<m[3]<<"\t"<<m[4]<<"\t"<<tot<<"\t"<<avg<<"\t"<<grade<<endl;
}
