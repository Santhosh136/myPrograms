#include<string>
#include<iostream>

using namespace std;

int main()
{
	// Constructors using string

	// string s1;
	// string s2("Hello");
	// string s3(s2);

	// cout<<"String 1:"<<s1<<endl;
	// cout<<"String 2:"<<s2<<endl;
	// cout<<"String 3:"<<s3<<endl;

	// String manipulators

	// string st = "abcde";
	// st.insert(2,"12345");
	// cout<<st<<endl;
	// st.erase(2,3);
	// cout<<st<<endl;
	// st.replace(2,2,"");
	// cout<<st<<endl;

	// String characteristics
	// cout<<"Size:"<<st.size()<<endl;
	// cout<<"Length:"<<st.length()<<endl;
	// cout<<"Maximum Size:"<<st.max_size()<<endl;
	// cout<<"Capacity:"<<st.capacity()<<endl;
	// cout<<"Is Empty:"<<st.empty()<<endl;
	
	// s1.resize(20);
	// cout<<"Size:"<<s1.size()<<endl;
	// cout<<"Length:"<<s1.length()<<endl;
	// cout<<"Maximum Size:"<<s1.max_size()<<endl;
	// cout<<"Capacity:"<<s1.capacity()<<endl;
	// cout<<"Is Empty:"<<s1.empty()<<endl;

	// if(s1.empty())
	// {
	// 	cout<<"S2 is empty"<<endl;
	// }
	// else
	// {
	// 	cout<<"S2 is not empty"<<endl;
	// }

	string s1 = "Santhosh";
	string s2 = "Sibi";

	int a = s1.compare(s2);
	// cout<<a<<endl;
	cout<<"Before swapping:"<<endl;
	cout<<"s1:"<<s1<<endl;
	cout<<"s2:"<<s2<<endl;
	s1.swap(s2);
	cout<<"After swapping:"<<endl;
	cout<<"s1:"<<s1<<endl;
	cout<<"s2:"<<s2<<endl;
	return 0;
}