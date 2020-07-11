// functionsInsideStructure.c
#include<stdio.h>

struct fun {
	int a;
	// void print() {
	// 	printf("value of a is %d",a);
	// }
};

int main() {
	struct fun f;
	printf("%d",f.a);
}