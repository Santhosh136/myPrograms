#include <iostream>
using namespace std;

class Student
{
private:
	int regno;
	string name;
public:
	Student(int r, string s)
	{
		regno = r;
		name  = s;
	}
	Student(Student &x)
	{
		regno = x.regno;
		name = x.name;
	}
	void show(void);
};

void Student::show(void)
{
	cout<<"Reg no:"<<regno<<endl;
	cout<<"Name:"<<name<<endl;
}

int main(int argc, char const *argv[])
{
	Student s1(1,"aarthi");
	Student s2(s1);
	s2.show();
	return 0;
}