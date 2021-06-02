#include <stdio.h>

void swap(int *a, int *b){
	int t = *a; 
	*a = *b; 
	*b = t;
}

int print_arr(int *a, int n){
	for(int i=0; i<n; i++){
		printf("%d", a[i]); 
	}
	printf("\n"); 
}

void insertion_sort(int *a, int n){
	for(int i=1; i<n; i++){
		int key = a[i]; 
		int j = i-1;

		while(j>=0 && key<a[j]){
			//shift operation
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key;
	}

	print_arr(a, n);
}


int main(){
	int a[] = {6,5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);

	insertion_sort(a, n); 
}