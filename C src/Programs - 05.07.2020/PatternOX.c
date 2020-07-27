#include<stdio.h>

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	char a[n][m];
	
	int t,b,l,r;
	int dir = 0;
	char value = 'x';
	
	t = l = 0;
	b = n-1;
	r = m-1;
		
	while(t<=b && l<=r) {
		if(dir == 0) {
			for(int i=l; i<=r; i++) {
				a[t][i] = value;
			}
			t++;
		}
		if(dir == 1) {
			for(int i=t; i<=b; i++) {
				a[i][r] = value;
			}
			r--;
		}
		if(dir == 2) {
			for(int i=r; i>=l; i--) {
				a[b][i] = value;
			}
			b--;
		}
		if(dir == 3) {
			for(int i=b; i>=t; i--) {
				a[i][l] = value;
			}
			l++;
		}
		
		dir = (dir+1) % 4;
		if(dir == 0)
			if(value == 'x') value = 'o';
			else value = 'x';
	}
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
