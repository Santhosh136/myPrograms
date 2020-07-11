#include<iostream>
using namespace std;

class Student
{
private:
	int sno;
	string name;
	int marks[5];
	int tot;
	double avg;
public:
	void getdata(void);
	void putdata(void);
	int total();
	double average();
};

void Student::getdata(void)
{
	cout<<"Enter sno,name and 5 subject marks of student:";
	cin>>sno>>name;
	for(int i=0;i<5;i++)
	{
		cout<<"Mark of subject "<<i+1<<":";
		cin>>marks[i];
	}
}

void Student::putdata(void)
{
	cout<<"Sno:"<<sno<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Marks"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Mark of subject "<<i+1<<":";
		cout<<marks[i]<<endl;
	}		
	cout<<"Total:"<<total()<<endl;
	cout<<"Average:"<<average()<<endl;
}

int Student::total()
{
	tot =0;
	for(int i=0;i<5;i++)
	{
		tot+=marks[i];
	}
	return tot;
}

double Student::average() {
	avg = double(tot) / 5;
	return avg;
}

int main()
{
	int n;
	cout<<"Enter the no of students:";
	cin>>n;
	Student s[n];
	for(int i=0;i<n;i++)
	{
		s[i].getdata();
		s[i].putdata();
	}
	return 0;
}