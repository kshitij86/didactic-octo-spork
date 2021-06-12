// Find if there is a subarray with sum as zero

#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
using namespace std; 

// O(n) time solution

int fastZeroSubArray(vector<int> &A){
	int size = A.size(), sum = 0; 
	unordered_set<int> hash_store; 

	hash_store.insert(0); 
	for(int i=0; i<size; i++){
		sum += A[i]; 
		if(hash_store.find(sum) != hash_store.end()){
			return 1; 
		}
		hash_store.insert(sum); 
	}
	return 0; 
}

int main(){
	int n, i=0, x; 
	vector<int> A; 

	scanf("%d", &n); 
	for(; i<n; i++){
		scanf("%d", &x); 
		A.push_back(x); 
	}

	cout << fastZeroSubArray(A) << endl; 
}