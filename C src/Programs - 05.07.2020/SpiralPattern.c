#include<stdio.h>

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Given matrix\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) 
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	printf("\nSpiral\n");
	int dir = 0;
	int t=0, b=n-1, l=0, r=m-1;
	while(t<=b && l<=r) {
		if(dir == 0) {
			for(int i=l; i<=r; i++) 
				printf("%d ", a[t][i]);
			t++;
		}
		else if(dir == 1) {
			for(int i=t; i<=b; i++) 
				printf("%d ", a[i][r]);
			r--;
		}
		else if(dir == 2) {
			for(int i=r; i>=l; i--) 
				printf("%d ", a[b][i]);
			b--;
		}
		else if(dir == 3) {
			for(int i=b; i>=t; i--) 
				printf("%d ", a[i][l]);
			l++;
		}
	
		dir = (dir+1)%4;
	}
	

}
