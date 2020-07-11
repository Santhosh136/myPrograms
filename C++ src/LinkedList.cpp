#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct Node {
	int data;
	struct Node* next;
}node;

class LinkedList {
	private:
		node head;
	public:
		node createNode();
		void displayNode();
		void insertAtLast();
		void insertAtFirst();
		void insertAtMiddle();
		void deleteAtLast();
		void deleteAtFirst();
		void delelteAtMiddle();
		void displayList();
};

