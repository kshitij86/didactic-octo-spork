/* Find the peak in a given array 
	A peak is defined as an element which is greater than its previous and next elements both
	The first and last elements can never be peaks. */
#include <bits/stdc++.h>
using namespace std;

int slowPeakFinder(vector<int> A){
	// O(n) time solution checks n-2 elements
	for(int i=1; i<A.size()-1; i++){
		if(A[i]>A[i-1] && A[i]>A[i+1])
			return i; // Assuming only one peak
	}
	return -1; // No peak
}

int fastPeakFinder(vector<int> A){
	// O(logn) time solution, uses binary search
	// fails for invalid input
	int first = 0, last = A.size()-1, mid;
	while(first<=last){
		mid = (first + last)/2; 

		if(mid || mid != A.size()-1){
			if(A[mid]>A[mid-1] && A[mid]>A[mid+1]){		
					return mid; 
			} else if(A[mid]<A[mid+1]) {
				// Elements increase L-R, we are in left subarray, move right
				first = mid+1; 
			} else {
				// Elements decrease R-L, we are in right subarray, move left
				last = mid-1; 
			}
		}
	}
	return -1; // No peak
}

int main(){
	vector<int> A = {1,2,3,4,5,4,3,2,1}; 

	printf("Slow peak at: %d\n", slowPeakFinder(A)); 
	printf("Fast peak at: %d\n", fastPeakFinder(A)); 

}