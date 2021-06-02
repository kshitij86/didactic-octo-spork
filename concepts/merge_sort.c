#include <stdio.h>

 int main(){
 	int a[] = {1,2,3,4,5,6};
 	int n = sizeof(a) / sizeof(int);

 	mergesort(a, 0, n-1); 
 }