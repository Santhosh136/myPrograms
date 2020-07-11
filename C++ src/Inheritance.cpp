#include<iostream>
using namespace std;

class Student
{
	int regno;
	string name;
public:
	void getdata()
	{
		cout<<"Enter regno and name:"<<endl;cin>>regno>>name;
	}
	void putdata()
	{
		cout<<"Roll No:"<<regno<<endl;
		cout<<"Name:"<<name<<endl;
	}
};

class Test:virtual public Student
{
	int marks[5];
	int tot;
	double avg;
public:
	void getmarks()
	{
		tot = 0;
		cout<<"Enter 5 marks:"<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>marks[i];
			tot = tot + marks[i];
		}
	}
	int total()
	{
		return tot;
	}
	double average()
	{
		return (double)tot/5;
	}
	void putdata()
	{
		cout<<"Marks:"<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<"Mark "<<i+1<<":"<<marks[i]<<endl;
		}
		cout<<"Total marks:"<<total()<<endl;
		cout<<"Average marks:"<<average()<<endl;
	}
};

class Sports:public virtual Student
{
	protected:
	double scores;
public:
	void getscore()
	{
		cout<<"Enter score:";cin>>scores;
	}
	void putdata()
	{
		cout<<"Sports score:"<<scores<<endl;
	}
};

class Total:public Test,public Sports
{
public:
	void display()
	{
		cout<<"Total points:"<<(average()+scores)/2<<endl;
	}
};

int main()
{
	
	Total t1;
	t1.getdata();
	t1.getmarks();
	t1.getscore();
	t1.Student::putdata();
	t1.Test::putdata();
	t1.Sports::putdata();
	t1.display();
	return 0;
}