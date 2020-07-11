#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head = NULL;

void insert() {
	int x;
	printf("Enter the data of the element:");
	scanf("%d",&x);
	struct Node* new = (struct Node*) malloc(sizeof(struct Node*));
	new -> data = x;
	new -> next = NULL;
	if(head == NULL)
		head = new;
	else {
		struct Node* temp = head;
		while(temp->next != NULL) {
			temp = temp -> next;
		}
		temp -> next = new;
		new -> next = NULL;
	}
}

void delete() {

}

void display() {
	struct Node* temp = head;
	while(temp != NULL) {
		printf("%d->",temp->data);
		temp = temp -> next;
	}
	printf("null\n");
}

int main(int argc, char const *argv[])
{
	int choice;
	while(1) {
		printf("\nEnter 1 for inserting and 2 for deleting then 3 for display the elements of a list:");
		scanf("%d",&choice);
		switch(choice) {
			case 1:insert();break;
			case 2:delete();break;
			case 3:display();break;
			default:break;
		}
		if(choice == 0)
			break;
	}
	printf("\nProgram is terminated");
	return 0;
}