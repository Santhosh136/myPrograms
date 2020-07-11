#include<iostream>
#include<iomanip>
using namespace std;

ostream & unit (ostream & output)
{
	output << setw(10);
	output << setiosflags(ios::right);
	output << setprecision(2);
	output << setfill('*');
	output.setf(ios::showpoint);
	return output;
}

int main()
{
	float f;
	cout<<"Enter any float value:";
	cin>>f;
	cout<<"The value is "<< f << unit;
}
