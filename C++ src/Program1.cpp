#include<iostream>
using namespace std;

class Student {
	string name;
	string gender;
	int regno;
	double cgpa;
public:
	void setValues(string name, string gender, int regno, double cgpa) {
		this->name = name;
		this->gender = gender;
		this->regno = regno;
		this->cgpa = cgpa;
	}
	void getValues() {
		cout<<"Name:"<<name<<endl;
		cout<<"Regno:"<<regno<<endl;
		cout<<"Gender:"<<gender<<endl;
		cout<<"CGPA:"<<cgpa<<endl;
	}
};
int main() {
	int regno;
	double cgpa;
	string name, gender;
	Student *ptr;
	Student s1[3];
	ptr = s1;
	for(int i=0;i<3;i++) {
		cout<<"Enter the name, gender, regno and cgpa of a student:"<<endl;
		cin>>name>>gender>>regno>>cgpa;
		(ptr+i)->setValues(name,gender,regno,cgpa);	
	}
	for(int i=0;i<3;i++) {
		cout<<"Student "<<i+1<<endl;
		(ptr+i)->getValues();	
		cout<<endl;
	}
}