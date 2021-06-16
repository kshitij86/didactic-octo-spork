#include <cstdio>
#include <vector>
using namespace std; 

void printIntegerVector(vector<int> a){
	for(int i: a){
		printf("%d ", i);
	}
	printf("\n");
}

int binarySearch(vector<int> v, int x){
	// Iterative binary search

	int start = 0, end = v.size()-1, mid;

	while(start <= end){
		mid = (start + end)/2; 
		if(v[mid] == x){
			return mid; 
		} else if(v[mid]>x){
			end = mid-1; 
		} else {
			start = mid+1; 
		}
	} 
	return -1;  // Not found
}
