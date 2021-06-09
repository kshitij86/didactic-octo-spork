// Needs fix around line number 35, to control the item being examined

#include<stdio.h>
#define MAX 1000

int max(int a, int b){
	return a > b ? a : b; 	
}

void print(int m[MAX][MAX], int r, int c){
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d\t", m[i][j]); 
		}
		printf("\n"); 
	}
	printf("\n"); 
}

int main(){
	int n = 4, w = 7;
 	int m[MAX][MAX], cm[MAX][2] = {{1,10}, {2,12}, {4,28}};	

	for(int i=0; i<n; i++)
		m[i][0] = 0; 
	for(int j=0; j<w; j++)
		m[0][j] = 0;
	
	print(m, n, w); 	

	// i controls items
	// j controls capacity of bag
	int k = 0; 
	for(int i=1; i<n; i++){
		for(int j=1; j<w; j++){
			if(cm[k][0]<=j){
				int profit_added = cm[i-1][1] + m[i-1][j-cm[i-1][0]], profit_not_added = m[i-1][j]; 
				m[i][j] = max(profit_added, profit_not_added); 
			} else {
				// capacity of bag too low
				m[i][j] = m[i-1][j];
			}
		}
	}
	
	print(m, n, w);
	
	printf("%d\n", m[n-1][w-1]); 
}
