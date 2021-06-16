#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}

void printArray(int *a, int n){
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n"); 
}


int main(){
	int a[] = {3,5,2,4,1}; 
	int n = sizeof(a)/sizeof(a[0]); 

	for(int i=0; i<n; i++){
		int currMin = i; 
		for(int j=i+1; j<n; j++){
			if(a[currMin]>a[j])
				currMin = j;
		}
		swap(&a[currMin], &a[i]); 
		printArray(a, n);
	}
}