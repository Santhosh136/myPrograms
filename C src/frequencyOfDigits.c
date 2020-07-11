// frequencyOfDigits.c
#include <stdio.h>
int main() {
	char s[10];
	int a[10]={0};
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++) {
		if(s[i]<'9' && s[i]>'0') {
			a[s[i]-48]++;
		}
	}
	for(int i=0;i<10;i++)
	 	printf("%d ",a[i]);
}