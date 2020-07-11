#include<stdio.h>
int main(void)
{
	switch(3)
	{
		case 1: ;break;
		if(0)
		{
			case 2: printf("Hello");
		}
		else case 3:
		{
			printf("World");
		}
	}
}
