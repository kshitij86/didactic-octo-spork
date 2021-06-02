// find out the the finishing and discovery times of nodes in a dfs
// not at all trivial to implement, every node should have color and time properties probably need structs of nodes for that

#include <stdio.h>
#include <string.h>
#define MAX 1000
#define GRAPH_SIZE 3
#define SOURCE 0 

struct node{
	int id; 
	int time[2]; 
	int adj[GRAPH_SIZE-1]; 
}; 

int stack[MAX] = {0}, top = -1; 

int push(int item){
	if(top == MAX-1)
		return 0; 
	stack[++top] = item;	
	return 1;
}

int pop(){
	if(top == -1)
		return -1; 
	int popped = stack[top--]; 
	return popped; 
}

int isempty(){
	return top == -1; 
}

int peek(){	
	return stack[top]; 
}

int main(){
	
	int visited[GRAPH_SIZE] = {0}, time = 1;
	// define graph
	struct node nodes[GRAPH_SIZE] = {{0, {0,0}, "WHITE", {1,2}},
									 {1, {0,0}, "WHITE",{0,2}},
									 {2, {0,0}, "WHITE", {0,1}}}; 
	

	// perform single pass dfs over a source vertex (vertex 1)
	push(SOURCE); // only id pushed to stack, wont implement a stack of structs 
	while(!isempty()){
		struct node *extracted = &nodes[peek()]; 
		if(!strcmp(extracted->color, "WHITE")){ 
			// strcmp returns 0 if strings are equal
			visited[extracted->id] = 1; //discover this node, not yet fully explored
			extracted->color = "GRAY";
		} else {
			
		}	 		
	}
}
