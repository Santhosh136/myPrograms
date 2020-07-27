#include<stdio.h>
int main() {
	/*char s[100]="one two";
	char r[100];
	gets(s);
	int len,i;
	int last, index=0;
	for(len=0;s[len] !='\0'; len++);
	last = len;
	for(i=len-1; i>-1; i--) {
	
		if(s[i]==' ') {
			for(int j=i+1; j<last; j++,index++) {
				r[index] = s[j];
			}
			r[index++] = ' ';
			last = i;
		}
	}
	for(int i=0; i<last; i++) {
		r[index++] = s[i];
	}
	r[index] = '\0';
	printf("%s",r);*/
	
	int a[10]; // array 1
	int b[10]; // array 2
	int c[10]; // answer array
	int carry = 0;
	int n1,n2;
	
	scanf("%d %d",&n1, &n2 );
	for(int i=0;i<n1;i++) scanf("%d",a+i);
	for(int i=0;i<n2;i++) scanf("%d",b+i);
	
	int i,j,k;
	
	i = n1-1;
	j = n2-1;
	
	k = 0;
	
	while(i>=0 && j>=0) {
		c[k++] = carry + (a[i] + b[j])%10;
		carry = (a[i] + b[j])/10;
		i--;
		j--;
	}
	printf("%d %d\n",i,j);
	if(i >= 0) {
		while(i >= 0) {
			c[k++] = (carry + a[i]) % 10;
			carry = (carry + a[i]) / 10;
			i--;
		}
	}
	if(j >= 0){
		while(j >= 0) {
			c[k++] = (carry + b[j]) % 10;
			carry = (carry + b[j]) / 10;
			j--;
		}
	}
	
	if(carry > 0) {
		c[k++] = carry;
	}
	
	
	for(i=0;i<k;i++) {
		printf("%d",c[i]);
	}
}

