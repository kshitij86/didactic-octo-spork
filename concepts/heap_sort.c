// forward sort the array

#include <stdio.h>

void swap(int *a, int *b){
	int t = *a; 
	*a = *b; 
	*b = t;
}

int min_heapify(int *a, int n, int i){
	int small = i; 
	int left = 2*i+1, right = 2*i+2; 

	if(left<n && a[left]<a[small])
		small = left; 

	if(right<n && a[right]<a[small])
		small = right;

	if(small != i){
		swap(&a[small], &a[i]);
		min_heapify(a, n, small);

	}

}

int print_heap(int *a, int n){
	for(int i=0; i<n; i++){
		printf("%d", a[i]); 
	}
	printf("\n");
}

int build_heap(int *a, int n){
	int last_internal = (n-1)/2;

	for(int i=last_internal; i>=0; i--){
		min_heapify(a, n, i); 
	}

}

void heap_sort(int *a, int n){
	build_heap(a, n);

	int size = n;
	for(int i=0; i<n; i++){
		// extract min and re-heapify
		swap(&a[0], &a[size-1]);
		printf("%d", a[size-1]); 
		size--;
		min_heapify(a, size-1, 0);
	}
	printf("\n");

}


int main(){
	int a[] = {6,4,6,4,4,6,2,2,6,8,5,4,2,6,7,5,3,5,6,8};
	int n = sizeof(a)/sizeof(int);

	heap_sort(a, n); 
}