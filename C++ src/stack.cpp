#include<iostream>
#define size 5
using namespace std;

class stack
{
	int top=-1,st[size];
	public:
		int isfull()
		{
			if(top==size-1)
			return 1;
			return 0;
		}
		int isempty()
		{
			if(top==-1)
			return 1;
			return 0;
		}
		void push()
		{
			int x;
			if(isfull())
			cout<<"Stack is empty"<<endl;
			else{
			cout<<"Enter the element to be inserted:"<<endl;cin>>x;
			st[++top]=x;
			}
		}
		void pop()
		{
			if(isempty())
			cout<<"Stack is empty"<<cout;
			else
			cout<<"The popped elements is "<<st[top--]<<endl;
		}
		void peek()
		{
			if(isempty())
			cout<<"Stack is empty"<<endl;
			else
			cout<<"The peek is "<<st[top]<<endl;
		}
		void search()
		{
			int x,c=0;
			if(isempty())
			cout<<"Stack is empty";
			else{
			cout<<"Enter the element to be searched: "<<endl;
			cin>>x;
			
			for(int i;i<=top;i++)
			if(st[i]==x)
			c++;
			
			if(c>0)
			cout<<"The element is present"<<endl;
			else
			cout<<"The element is present"<<endl;
			}
		}
		void display()
		{
			if(isempty())
			cout<<"Stack is empty"<<endl;
			else
			for(int i=top;i>=0;i--)
			cout<<st[i]<<endl;
		}
};

int main()
{
	stack s1;
	int choice;
	do{
	cout<<"Enter the option"<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Peek"<<"4.Search"<<endl<<"5.Display"<<endl<<"0.Exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: s1.push();break;
		case 2: s1.pop();break;
		case 3: s1.peek();break;
		case 4: s1.search();break;
		case 5: s1.display();break;
		default: cout<<"Invalid operation";
	}
	}while(choice!=0);
}
