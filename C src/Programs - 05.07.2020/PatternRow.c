#include<stdio.h>
int main() {
	int *p;
	int n;
	int a[100] = {1};
	int b[100];
	scanf("%d",&n);
	printf("%d\n",1);
	for(int i=0;i<n-1;i++) {
		int k=0;
		for(int i=0;a[i]!=0;i++) {
			int count = 1;
			while(a[i] == a[i+1]) {
				count++;
				i++;
			}
			b[k++] = count;
			b[k++] = a[i];
		}
		for(int i=0;i<k;i++) printf("%d ",a[i] = b[i]);
		printf("\n");
	}
}
