// Perform iterative DFS
#include <stdio.h>
#define MAX 1000

int stack[MAX] = {0}, top = -1, printingenabled = 1; 

int push(int x){
	if(top == MAX-1)
		return 0; 
	stack[++top] = x;
	return 1; 
}

int pop(){
		if(top == -1)
			return 0;
		int popped = stack[top--];
		return popped; 

}

int isempty(){
	return top == -1;
}


int main(){
	int n = 4, dfs[MAX]= {0}, dfscounter = 0, graph[][4] = {{0,1,1,1}, {1,0,1,1},{1,1,0,1}, {1,1,1,0}}, visited[4] = {0};
		
	// for dfs, stack is needed

	for(int i=0; i<n; i++){
		push(i); // stack top has current source vertex
		while(!isempty()){
			int node = pop();
			if(printingenabled)
				printf("Visited %d,\n", node); 
			dfs[dfscounter++] = node; 
			visited[node] = 1; 
			for(int j=0; j<n; j++){
				if((!visited[j]) && (graph[node][j])){
					push(j);
				}
			}
		}
	}

	// print DFS output
	for(int i=0; i<n; i++){
		printf("%d ", dfs[i]); 
	}
	printf("\n"); 
}
