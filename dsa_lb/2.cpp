// find min and max in array

#include <bits/stdc++.h>
using namespace std;

void printMinAndMax(vector<int> arr){
	int min = INT_MAX, max = INT_MIN;

	// O(n) time solution
	for(int i: arr){
		printf("%d ", i); 
		if(i>max){
			max = i; 
		} 
		if(i<min){
			min = i; 
		}
	}

	printf("\nmin: %d, max: %d", min, max); 
}

int main(){
	vector<int> arr = {45,678,23423,67};

	printMinAndMax(arr); 
}