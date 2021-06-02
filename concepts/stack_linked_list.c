#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data; 
	struct node *next; 
} *head = NULL;


int push(int x){
	struct node *p = (struct node*)malloc(sizeof(struct node)); 	
	if(p == NULL){
		printf("Heap full: malloc error"); 
		return -1;
	}
	p->data = x;
	p->next = head; 
	head = p; 

	return 1;
}

int pop(){
	if(head == NULL){
		printf("Underflow!"); 
		return -1; 
	}
	int val = head->data; 
	struct node* temp = head; 

	head = head->next;
	free(temp); 
	return val; 
}

int main(){
	printf("%d\n", push(3)); 
	printf("%d\n", push(3)); 
	printf("%d\n", push(3)); 


	printf("%d\n", pop()); 
	printf("%d\n", pop()); 
	printf("%d\n", pop()); 
	printf("%d\n", pop()); 
	
}
