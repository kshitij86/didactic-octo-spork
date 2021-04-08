// Find the minimum spanning tree in a undirected, weighted graph using Kruskal's MST algorithm
#include <stdio.h>
#include <stdlib.h>


/*
	Graph for demo - 
	
		1
	 
   (1) / \ (2)
	 
     2  -  3
	
	   (0)	

	where, 
	k: (-1) -> Not connected
	k: (>=0) -> Connected, edge weight k
*/

void utilPrint(int m, int n, int mat[m][n]){
	// Utility function to print a matrix
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int countEdgePairs(int n){
	// For a graph with n edges, there are n! edge pairs

	if(n == 1) return 1;
	else return n*countEdgePairs(n-1);
}

void swapRows(int *a, int *b){
	// Swap elements of two arrays(rows)
	for(int i=0; i<3; i++){
		int temp;
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

}

int **sortEdgesByWeight(int graph[3][3], int n, int countPairs, int sortedEdges[countPairs][3]){
	// A data structure that returns all edge pairs sorted by weight

	int k=0;
	// Construct the data structure
	// int sortedEdges[countPairs][3];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(graph[i][j] != -1){
				sortedEdges[k][0] = i;
				sortedEdges[k][1] = j;
				sortedEdges[k][2] = graph[i][j];
				k++;
			}
		}
	}

	// Sort the edge weights in non-decreasing order (bubble sort)
	for(int i=0; i<countPairs; i++){
		for(int j=0; j<(countPairs-i-1); j++){
			if(sortedEdges[j][2] > sortedEdges[j+1][2]){
				swapRows(&sortedEdges[j], &sortedEdges[j+1]);
			}
		}
	}

	// Utility to verify result of above operation
	printf("Edge pairs: \n");
	utilPrint(countPairs, 3, sortedEdges);


	return sortedEdges;
}

int findCostOfMST(int mst[3][3]){
	int *visited = (int *)malloc(sizeof(mst));
	int cost = 0;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if((visited[i] == 0 || visited[j] == 0) && mst[i][j] != -1){
				printf("Adding edge between: %d & %d\n", i, j);
				cost += mst[i][j];
				visited[i] = 1;
				visited[j] = 1;
			}
		}
	}

	return cost;
}

void findMST(int graph[3][3]){
	int n = sizeof(graph[0])/sizeof(int);
	int countPairs = countEdgePairs(n);
	int edgePairs[countPairs][3];
	sortEdgesByWeight(graph, n, countPairs, &edgePairs);
	printf("Edge pairs in graph: %d\n", countPairs);

	
	// To keep track of visited vertices
	int *visited = (int *)malloc(sizeof(graph));
	for(int i=0; i<(sizeof(graph[0])/sizeof(int)); i++){
		visited[i] = 0;
	}

	// Apply Kruskal's to these sorted pairs and construct MST matrix
	int mst[n][n]; 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			mst[i][j] = -1; // Initially unconnected
		}
	}

	for(int i=0; i<countPairs; i++){
		// If either is unvisited
		if(visited[edgePairs[i][0]] == 0 || visited[edgePairs[i][1]] == 0){
			// Make a connection
			mst[edgePairs[i][0]][edgePairs[i][1]] = edgePairs[i][2];
			mst[edgePairs[i][1]][edgePairs[i][0]] = edgePairs[i][2];

			// To avoid cycles, sets some already visited ones to visited again
			visited[edgePairs[i][0]] = 1;
			visited[edgePairs[i][1]] = 1;	
		}
	}

	// Print the minimum spanning tree
	printf("Minimum spanning tree of the graph\n");
	utilPrint(n, n, mst);

	printf("Cost of MST: %d\n", findCostOfMST(mst));


}

int main(){

	int graph[3][3] = {{-1, 1, 2}, {1, -1, 0}, {2, 0,-1}};
	utilPrint(3, 3, graph);
	findMST(graph);

}
