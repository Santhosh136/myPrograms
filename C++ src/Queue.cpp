#include<iostream>
#define size 5
using namespace std;

class Queue
{
	int front=-1,rear=-1,queue[size];
	public:
		void enqueue()
		{
			if(isfull())
				cout<<"Queue is full"<<endl;
			else
			{
				cout<<"Enter the element: "<<endl;
				cin>>queue[++rear];
			}
		}
		void dequeue()
		{
			if(isempty())
				cout<<"Queue is empty"<<endl;
			else
				cout<<"The Dequeued element is: "<<queue[++front]<<endl;
		}
		void display()
		{
			if(isempty())
				cout<<"Queue is empty"<<endl;
			else
			{
				cout<<"The elements are: "<<endl;
				for(int i=front+1;i<=rear;i++)
				cout<<queue[i]<<endl;
			}
		}
		int isfull()
		{
			if(rear==size-1)
				return 1;
			else return 0;
		}
		int isempty()
		{
			if(front==rear)
				return 1;
			else return 0;
		}
};

int main()
{
	int choice;
	Queue q;
	do
	{
		cout<<"Enter"<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: q.enqueue();break;
			case 2: q.dequeue();break;
			case 3: q.display();break;
			default: cout<<"Invalid operation"<<endl;
		}
	}while(choice!=0);
	return 0;
}
