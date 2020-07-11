#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string st = "Hello";
	cout<<st.length()<<endl;
	cout.width(8);
	cout.setf(ios::scientific,ios::floatfield);
	// cout.setf(ios::internal,ios::adjustfield);
	cout<<10.45;	
	return 0;
}
