// reverse the array

#include<bits/stdc++.h>
using namespace std; 

void swap(int *a, int *b){
	int temp = *a;
	*a = *b; 
	*b = temp;  
}

void reverseAndPrintArray(int arr[], int n){
	// odd length
	for(int i=0, j=n-1; i<(n/2); i++,j--){
			swap(&arr[i], &arr[j]); 
	}

	for(int i=0; i<n; i++){
		printf("%d ", arr[i]); 
	}
	printf("\n"); 
}

int main(){
	int arr[] = {1,2,3,4,5}, n = sizeof(arr)/sizeof(arr[0]); 

	reverseAndPrintArray(arr, n); 
}