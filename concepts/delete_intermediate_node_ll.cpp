#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
} *head = NULL;

void insert(Node **head, int data){
	struct Node *temp = new Node();
	
	temp->data = data;
	temp->next = NULL;
	
	if(*head == NULL){
		*head = temp;
	} else{
		struct Node *trav = *head;
		while(trav->next != NULL){
			trav = trav->next;	
		}
		trav->next = temp;
	}
}

void printList(Node **head){
	struct Node *trav = *head;

	while(trav != NULL){
		printf("%d\n", trav->data);
		trav = trav->next;
	}
	printf("\n");
}

//buggy
void deleteMiddleNode(struct Node **mid){
	// Given a reference to a node, deletes the node
	struct Node *trav = *mid;
	while(trav->next->next != NULL){
		*mid = trav->next;
		trav = trav->next;
	}
	trav->next = NULL;
}


int main(){

	// printf("%d", head == NULL);

	insert(&head, 2);
	insert(&head, 3);
	insert(&head, 4);
	insert(&head, 5);
	insert(&head, 6);
	insert(&head, 7);


	printList(&head);

	struct Node *trav = head;
	while(trav->data != 3){
		trav = trav->next;
	}

	deleteMiddleNode(&trav);

	printList(&head);


	return 0;
}