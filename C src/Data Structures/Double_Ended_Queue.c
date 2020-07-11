#include<stdio.h>
#define size 5

void Enqueue();
void Dequeue();
void Search();
void Display();
int Isfull();
int Isempty();
void Insfront();
void Delrear();

int front=-1,rear=-1,queue[size];

int main()
{
	int choice;
	printf("\nEnter option:\n");
	printf("\n1.Input Restricted Queue \n2.Output Restricted Queue:");
	scanf("%d",&choice);
	if(choice==1)
	{
		do{
		printf("\n1.Enqueue \n2.Dequeue \n3.Search \n4.Display \n5.Isfull \n6.Isempty \n7.Insert at front:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Enqueue();break;
			case 2:Dequeue();break;
			case 3:Search();break;
			case 4:Display();break;
			case 5:Isfull();break;
			case 6:Isempty();break;
			case 7:Insfront();break;
		}
		}
		while(choice<=7);	
	}
	else
	{
		do{
		printf("\n1.Enqueue \n2.Dequeue \n3.Search \n4.Display \n5.Isfull \n6.Isempty \n7.Delete at rear:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Enqueue();break;
			case 2:Dequeue();break;
			case 3:Search();break;
			case 4:Display();break;
			case 5:Isfull();break;
			case 6:Isempty();break;
			case 7:Delrear();break;
		}
		}
		while(choice<=7);
	}
	
	return 0;
}

void Enqueue()
{
	int x;
	if(Isfull())
		printf("\nThe queue is full");
	else
	{
		printf("\nEnter the value:");
		scanf("%d",&x);
		rear++;
		queue[rear]=x;
	}
}

void Dequeue()
{
	if(Isempty())
	{
		printf("\nThe queue is empty");
	}
	else
	{
		front++;
		printf("\nThe dequeued value is %d",queue[front]);
	}
}

int Isfull()
{
	if(rear==size-1 )
	{
		return 1;
	}
	return 0;
}

int Isempty()
{
	if(rear==front)
		return 1;
	return 0;
}

void Display()
{
	int i;
	if(Isempty())
	{
		printf("\nThe queue is Empty");
	}
	else
	{
		printf("\nThe Elements are:");
		for(i=front+1;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
}

void Insfront()
{
	int x;
	if(front==-1)
	{
		printf("\nThe queue is Full");
	}
	else
	{
		printf("\nEnter the value :");
		scanf("%d",&x);
		queue[front]=x;
		front--;
	}
}

void Delrear()
{
	if(front==rear)
		printf("\nThe queue is Empty");
	else
	{
		printf("\nThe Dequeued value is %d",queue[rear]);
		rear--;
	}
}

void Search()
{
	int i,x,c=0;
	printf("\nEnter the value to be searched:");
	scanf("%d",&x);
	for(i=front+1;i<=rear;i++)
	{
		if(queue[i]==x)
		c++;
	}
	if(c>0)
	{
		printf("\nThe Element is present");
	}
	else
	{
		printf("\nThe Element is not present");
	}
}
