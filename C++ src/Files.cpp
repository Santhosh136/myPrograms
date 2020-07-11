#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char s[100];
	ofstream write;
	write.open("abc.txt",ios::app);
	cout<<"Enter something..."<<endl;
	cin.getline(s,100);
	write<<s;
	write.close();

	ifstream read;
	read.open("abc.txt");
	
	while(read.eof() == 0){
		read.getline(s,100);
		cout<<s;
	}
	read.close();
	return 0;
}
