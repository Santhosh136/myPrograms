#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	char word[20];
	int i = 0;
	while(n > 0) {
		int r = n % 26;
		if(r==0) r = 26; 
		
		word[i++] = r+64;
		
		if(n== 26) n=-1;
		else n = n / 26;
	}
	word[i] = '\0';
	for(int j=i-1;j>=0;j--) printf("%c",word[j]);
	
}
