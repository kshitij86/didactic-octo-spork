// Detect a graph in a cycle using spanning tree and DFS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10000;


/*
	1 - 2
	|   |
	3 - 4

*/

// Stacks not provided by C so we write our own
struct Stack{
	int arr[MAX];
	int top;

	Stack(){
		memset(arr, -1, sizeof(arr));
		top = -1;
	}

	void push(int key){ arr[++top] = key; }
	void pop(){ top--; }
	int topOfStack() { return arr[top]; }
	int isEmpty(){ return top == -1; }
	int isFull() { return top == MAX; }
};


bool hasCycle(int n, int graph[n][n]){
	int *visited = (int *)malloc(n*sizeof(int));

	Stack s;
	s.push();

	while(!s.isEmpty()){
		int node = s.topOfStack();
		s.pop();
		visited[node] = 1;

		printf("Visited node: %d\n", node);

		for(int i=0; i<n; i++){
			if(!visited[i] && graph[node][i])
				s.push(node);
		}

	}

	return false;
}

int main(){
	int graph[4][4] = {{-1,1,1,-1}, {1,-1,-1,1}, {1,-1,-1,1}, {-1,1,1,-1}};

	printf("The graph has a cycle: %d\n", hasCycle(4, graph));
}