#include<stdio.h>
int main() {
	int n,i=0,c=0;
	printf("Binary numbers\n");
	scanf("%d",&n);
	for(i=0;i<2;i++) {
		for(int j=0;j<2 ;j++) {
			for(int k=0;k<2 && c<n;k++){
				printf("\n%d%d%d",i,j,k);
				printf("\n%d",++c);
				// if(c>=n)
				// 	break;
			}
		// if(c>=n)
		// 	break;
		}
	// if(c>=n)
	// 	break;
	}
}
