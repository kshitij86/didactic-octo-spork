#include <stdio.h>
#define MAX 1000

int main(){
	int n = 4, w = 5, N = n+1, W = w+1,  m[MAX][MAX], a[MAX] = {6,3,2,1}; 

	m[0][0] = 1; // sum of 0 with 0 elements is always possible
	for(int i=1; i<N; i++)
		m[i][0] = 1;
	for(int j=1; j<W; j++)
		m[0][j] = 0; 

	for(int i=1; i<N; i++){
		for(int j=1; j<W; j++){
			if(a[i-1]<=j){
				m[i][j] = m[i-1][j] || m[i-1][j-a[i-1]]; 
			} else {
				m[i][j] = m[i-1][j]; 
			}
		}
	}	
	
	printf("%d\n", m[n][w]); 
}
