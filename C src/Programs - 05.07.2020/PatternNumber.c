#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	
	int a[n][n];
	int t,b,l,r;
	int dir = 0;
	
	int v = (n/2)+1;
	t = l = 0;
	b = r = n-1;
	
	while(t <= b && l <= r) {
		if(dir == 0) {
			for(int i=l; i<=r; i++) {
				a[t][i] = v;
			}
			t++;
		}
		if(dir == 1) {
			for(int i=t; i<=b; i++) {
				a[i][r] = v;
			}
			r--;
		}
		if(dir == 2) {
			for(int i=r; i>=l; i--) {
				a[b][i] = v;
			}
			b--;
		}
		if(dir == 3) {
			for(int i=b; i>=t; i--) {
				a[i][l] = v;
			}
			l++;
		}
		
		dir = (dir+1)%4;
		if(dir == 0) v--;
	}
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

