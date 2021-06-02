#include <stdio.h>
#define MAX 1000

struct stack{
	int arr[MAX]; 
	int top; 
}s; 

int push(int x){
	if(s.top == MAX-1){
		printf("Overflow\n");
		return -1; 
	}
	s.arr[++s.top] = x; 
	return 1;
}

int pop(){
	if(s.top == -1){
		printf("Underflow\n"); 
		return -1; 
	}

	int val = s.arr[s.top--];
	return val; 
}

int main(){

	s.top = -1; 

	for(int i=1; i<4; i++){
		printf("%d\n", push(i)); 
	}

	printf("\n");

	for(int i=1; i<3; i++){
		printf("%d\n", pop()); 
	}

}