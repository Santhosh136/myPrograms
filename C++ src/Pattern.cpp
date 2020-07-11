#include<iostream>
using namespace std;

void pattern()
{
	int i,j,k=0,c=0;
	char name[10];
	cout<<"Enter the name without space:";
	cin>>name;
	for(i=0;name[i]!='\0';i++)
	c++;
	int m=c-2;
	int n=c/2-1,x=1;
	if(i%2!=0)
	{ 
		 for(i=0;i<c;i++)
		 {
		 	if(i<=c/2)
		 	{
		 	for(j=0;j<i;j++)
		 	{
		 		cout<<" ";
			}
			cout<<name[i];
			
			for(k=0;k<m;k++)
				cout<<" ";
					
			if(i!=c/2)
			cout<<name[i]<<endl;
			else
			cout<<endl;
			
			if(m>0)
			m=m-2;
			}
			
			else
			{
				for(j=0;j<n;j++)
					cout<<" ";
				cout<<name[i];
				n--;
				for(k=0;k<x;k++)
					cout<<" ";
				cout<<name[i]<<endl;
				x=x+2;
			}
			
			
		 }
	}
}

int main()
{
	pattern();
}

