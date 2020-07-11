#include<stdio.h>

int main()
{
	int a[1000];
	int i,j,d,temp,temp1,n;
	scanf("%d%d",&n,&d);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		
	for(j=0;j<d;j++)
	{
		temp = a[0];
		for(i=0;i<n-1;i++)
		{
			a[i] = a[i+1];
		}
		a[n-1] = temp;
	}
	for(i=0;i<n;i++)
		printf("%d\t",a[i] );
}