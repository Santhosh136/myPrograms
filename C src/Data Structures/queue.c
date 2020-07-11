#include<stdio.h>
#define size 5

void Enqueue();
void Dequeue();
void Search();
int Isfull();
int Isempty();
void Display();

int front=-1,rear=-1,queue[size];

int main()
{
	int choice;
	do
	{
		printf("\nEnter the option:\n");
		printf("\n1 Enqueue\n2 Dequeue \n3 Search\n4 Display \n5 Isfull \n6 Isempty\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Enqueue();break;
			case 2:Dequeue();break;
			case 3:Search();break;
			case 4:Display();break;
			case 5:if(Isfull())printf("\nQueue is Full"); else printf("\nQueue is not Full"); break;
			case 6:if(Isempty())printf("\nQueue is Empty"); else printf("\nQueue is not Empty"); break;
		}
	}while(choice<=6);
	return 0;
}

void Enqueue()
{
	int x;
	if(Isfull())
	{
		printf("\nQueue is full");
	}
	else
	{
		printf("\nEnter the element:");scanf("%d",&queue[++rear]);
	}
}

void Dequeue()
{
	if(Isempty())
	{
		printf("\nQueue is empty");
	}
	else
	{
		front++;
		printf("\nDequeued element is %d",queue[front]);
	}
}

int Isfull()
{
	if(rear==size-1)
	return 1;
	else
	return 0;
}

int Isempty()
{
	if(front==rear)
	return 1;
	else
	return 0;
}

void Display()
{
	int i;
	if(Isempty())
	{
		printf("\nQueue is empty");
	}
	else
	{
	printf("\nThe Queue elements are:");
	for(i=front+1;i<=rear;i++)
	{
		printf("\n%d",queue[i]);
	}
	}
}

void Search()
{
	int i,x,c=0;
	printf("\nEnter the element to be search:");
	scanf("\n%d",&x);
	for(i=front;i<=rear;i++)
	{
		if(x==queue[i])
		{
			c++;
		}
	}
	if(c>0)
	printf("\nElement is present");
	else
	printf("\nElement is not present");
}
