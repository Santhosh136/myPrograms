#include<stdio.h>

void countPages(int n,int p) {
	int a = p/2;
	int b;
	if(n%2 == 0)
		b = ((n-p)+1)/2;
	else
		b = (n-p)/2;
	printf("%d %d",a,b);

}

int main() {
	int n,p;
	int answer;
	scanf("%d %d",&n,&p);
	countPages(n,p);
	// printf("\n%d",answer);
}
