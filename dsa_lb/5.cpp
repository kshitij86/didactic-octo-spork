// Union and intersection of sorted arrays

#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include "utilities.h"
using namespace std;
 
vector<int> unionSortedArrays(vector<int> v1, vector<int> v2){
	vector<int> unionResult;
	set<int> hashSet; 

	for(int i: v1)
		hashSet.insert(i);

	for(int j: v2)
		hashSet.insert(j); 

	for(auto i: hashSet){
		unionResult.push_back(i);
	}

	return unionResult;
}

vector<int> intersectionSortedArrays(vector<int> v1, vector<int> v2){
	vector<int> intersectionResult;
	set<int> hashSet; 

	// Moderate O(nlogn) solution
	for(int i=0; i<v1.size(); i++){
		int toFind = v1[i];
		// Since second array is sorted
		if((binarySearch(v2, toFind) != -1) && (!hashSet.count(toFind))){
			intersectionResult.push_back(toFind); 
			hashSet.insert(toFind); 
		}
	}

	return intersectionResult;

}	

int main(){
	vector<int> v1 = {1,2,3,4,5,6,7}, v2 = {5,6,7,8,9,10}, unionVector, intersectionVector;

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	unionVector = unionSortedArrays(v1, v2);
	intersectionVector = intersectionSortedArrays(v1, v2);

	printIntegerVector(unionVector);
	printIntegerVector(intersectionVector);
}