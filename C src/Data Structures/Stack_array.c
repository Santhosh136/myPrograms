#include<stdio.h>
//Functions Declaration
void insert();
void delete();
void search();
int isempty();
int isfull();
void display();

//Stack Declration
#define s 5
int stack[10], top=-1;

//Main fuction
int main()
{
	int choice;
	printf("\nStack Operations using arrays");
	do
	{
		int chioce;
		printf("\n1.Insert 2.Delete 3.Search 4.Isfull 5.Isempty 6.Display\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();break;
			case 2:delete();break;
			case 3:search();break;
			case 4:if(isfull())printf("\nStack is full");else printf("\nThe Stack is not full");break;
			case 5:if(isempty())printf("\nStack is empty");else printf("\nThe Stack is not empty");break;
			case 6:display();break;
		}
	}while(choice!=0);
}

//Checks whether Stack is full or not
int isfull()
{
	if(top==s-1)
	{
		return 1;
	}
	return 0;
}

//Checks whether Stack is empty or not
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	return 0;
}

//Insert operation
void insert()
{
	int x;
	if(isfull())
	{
		printf("\nStack is Full");
	}
	else
	{
		printf("\nEnter the value");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}

//Deletion operation
void delete()
{
	if(isempty())
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nThe popped element is %d",stack[top]);
		top--;
	}
}

//Searching operation
void search()
{
	int i,x,c;
	printf("\nEnter the element to be search");
	scanf("%d",&x);
	for(i=0;i<=top;i++)
	{
		if(stack[i]==x)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	{
		printf("\nThe element is present");
	}
	else
	{
		printf("\nThe value is not present");
	}
}

//Displays the stack
void display()
{
	int i=0;for(i=top;i>=0;i--)
	{
		printf("\n%d",stack[i]);
	}
}
