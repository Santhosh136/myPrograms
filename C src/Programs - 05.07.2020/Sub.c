#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char** find(char s[], int k) {
	int len; for(len = 0; s[len]!='\0'; len++);
	int r = len-k+1;
	char words [r][k+1];
	
	char** results;
	results = calloc(2, sizeof(char*));
	
	for(int i=0; i< 2; i++) {
		results[i] = calloc(k+1, sizeof(char*));
	}
	
	
	for(int i=0; i<r; i++) {
		int c = 0;
		for(int j=i;j<i+k;j++) {
			words[i][c++] = s[j];
		}
		words[i][c] = '\0';
	}
	
	for(int i=0; i<r; i++) {
		printf("%s\n", words[i]);
	}
	
	char *max = words[0];
	char *min = words[0];
	
	for(int i=0;i<r;i++) {
		if(strcmp(max, words[i])<0) 
			max = words[i];
		if(strcmp(min, words[i])>0)
			min = words[i];
	}
	
	results[0] = max;
	results[1] = min;
	
	return results;
}

int main() {
	char s[100];
	int k;
	scanf("%s %d", s, &k);
	char** words = find(s, k);
	
	printf("%s\n", *(words+0));
	printf("%s\n", words[1]);	
}
