

#include<iostream>
using namespace std;

int main()
{
	int count[5];
	int ballot;
	int spoilt=0;
	for(int i=0;i<5;i++)
	count[i]=0;
	cout<<"Enter 0 for stop voting";
	cin>>ballot;
	while(ballot!=0)
	{
		
		switch(ballot)
		{
			case 1:count[0]+=1;break;
			case 2:count[1]+=1;break;
			case 3:count[2]+=1;break;
			case 4:count[3]+=1;break;
			case 5:count[4]+=1;break;
			default : spoilt+=1;break;
		}
		
		cin>>ballot;
	}
	cout<<":::VOTING RESULT:::"<<endl;
	for(int i=0;i<5;i++)
	cout<<"Candidate "<<i+1<<":"<<count[i]<<endl;
	cout<<"Spoilt votes are:"<<spoilt;
	return 0;
}
