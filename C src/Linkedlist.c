#include<stdio.h>
#include<stdlib.h>

// structure of a Node
struct node{
	int data;
	struct node* next;
};

// creating user defined type
typedef struct node* node;

// creating head pointer of List
node head = NULL;

// creating new node
node createNode() {
	int x;
	printf("\nEnter value of the node:");
	scanf("%d",&x);
	node new = (node) malloc(sizeof(node));
	if(new != NULL ) {
		new -> data = x;
		new -> next = NULL;
	}
	else {
		printf("\nNode is not created");
	}
	return new;
}

int sizeOfList() {
	int count = 0;
	node temp = head;
	while(temp!=NULL) {
		count++;
		temp = temp -> next;
	}
	return count;
}

// insert at first 
void insertAtFirst() {
	node newNode = createNode();
	if( head == NULL ) {
		head = newNode;
	}
	else {
		newNode -> next = head;
		head = newNode;
	}
}

// insert at last 
void insertAtLast() {
	
	node newNode = createNode();
	if(head == NULL ) {
		head = newNode;
	}
	else {
		node temp = head;
		while(temp -> next != NULL ) {
			temp = temp -> next;
		}
		temp -> next = newNode;
	}
}

// insert at middle 
void insertAtMiddle() {
	int pos;
	node newNode = createNode();
	if(head == NULL ) {
		head = newNode;
	}
	else {
		printf("\nEnter the position:");
		scanf("%d",&pos);
		if(pos > sizeOfList()) {
			printf("\nThe index is out of range")
		}
		else if(pos == 1) {
			newNode -> next = head;
			head = newNode;
		}
		else {
			int i = 1;
			node temp = head;
			while(i < pos-1) {
				temp = temp -> next;
				i++;
			}
			printf("\n>>%d",temp->data);
			newNode -> next = temp -> next;
			temp -> next = newNode;
		}
	}
}

// delete at first
void deleteAtFirst() {
	if( head == NULL) {
		printf("\nThe list is empty");
	}
	else {
		printf("\nThe deleted element is %d",head->data);
		node temp = head;
		head = head -> next;
		free(temp);
	}
}

// delete at last 
void deleteAtLast() {
	if(head == NULL) {
		printf("\nThe linked list is empty");
	}
	else {
		node temp = head;
		node prv;
		while(temp -> next != NULL)	{
			prv = temp;
			temp = temp -> next;
		}
		printf("\nThe deleted element is %d",temp -> data);
		prv -> next = NULL;
		free(temp);
	}
}

// delete at middle
void deleteAtMiddle() {
	if(head == NULL) {
		printf("\nThe list is empty");
	}
	else {
		int pos;
		printf("\nEnter the position:");
		scanf("%d",&pos);
		if(pos > sizeOfList()) {
			printf("\nThe index is out of range");
		}
		else if(pos == 1) {
			deleteAtFirst();
		}
		else {
			node prv, temp = head;
			int i = 1;
			while(i < pos) {
				prv = temp;
				temp = temp -> next;
				i++;
			}
			prv -> next = temp -> next;
			printf("\nThe deleted element is:%d",temp->data);
			free(temp);
		}
	}
}

// display the elements of list 
void displayList() {
	int a = sizeOfList();
	printf("\nSize of list is %d",a);
	if( head == NULL ) {
		printf("\nList is empty");
	}
	else {
		printf("\nList elements are:");
		node temp = head;
		while(temp != NULL ) {
			printf("%d ",temp -> data);
			temp = temp -> next;
		}
		printf("\n");
	}
}



int main() {
	int choice;
	printf("Linked List Implementation:");
	while(1) {
		printf("\nEnter 1.Insert at First 2.Insert at Last 3.Insert at Middle 4.Delete at First 5.Delete at Last 6.Delete at Middle 7.Display 0.Exit\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1: insertAtFirst();break;
			case 2: insertAtLast();break;
			case 3: insertAtMiddle();break;
			case 4: deleteAtFirst();break;
			case 5: deleteAtLast();break;
			case 6: deleteAtMiddle();break;
			case 7: displayList();break;
		}
		if(choice == 0) {
			printf("\nProgram terminated");
			break;
		}
	}
}
