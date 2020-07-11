#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node {
	int coEfficient;
	int power;
	struct Node* next;
};

typedef struct Node Node;
Node* head = NULL, *last = NULL;

Node* createNode(int coeff,int pow) {
	Node* new = (Node*)malloc(sizeof(Node));
	new->coEfficient = coeff;
	new->power = pow;
	new->next = NULL;
	return new;
}

void createPolynomial(int coeff,int pow) {
	Node* new = createNode(coeff,pow);
	if(head == NULL) {
		head = new;
		head->next = NULL;
	}
	else {
		Node* temp = head;
		while(temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = new;
		new->next = NULL;
	}
}

void printPolynomial(int x) {
	Node* temp = head;
	int sum = 0;
	// int x = 2;
	while(temp!=NULL) {
		printf("+%dx^%d",temp->coEfficient,temp->power);
		sum += (temp->coEfficient) * (pow(x,temp->power));
		temp = temp->next;
	}
	printf("\nValue is %d",sum);
}

int main() {
	int coeff,pow;
	int x;
	printf("Enter the polynomial in terms of coefficients and powers\nPress 0,0 to stop");
	while(1) {
		printf("\nEnter the coefficient:");scanf("%d",&coeff);
		printf("\nEnter the power:");scanf("%d",&pow);
		if(coeff == 0 && pow == 0) {
			break;
		}
		createPolynomial(coeff,pow);
	}
	printf("Completed\n");
	printf("\nEnter the value of x:");scanf("%d",&x);
	printPolynomial(x);
}