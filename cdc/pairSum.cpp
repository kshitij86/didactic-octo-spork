#include <iostream>
#include <vector>
#include <set>
using namespace std; 

int slowPairCount(vector<int> &array, int target){
	int pairs = 0;  

	// O(n2) solution
	for(int i=0; i<array.size(); i++){
		for(int j=i+1; j<array.size(); j++){
			if(array[i] + array[j] == target){
				pairs++; 
			}
		}
	}
	return pairs; 
}


int fasterPairCount(vector<int> &array, int target){
	// O(n) solution
	set<int> hash_map;
	int pairs = 0;
	
	for(int i=0; i<array.size(); i++){
		if(hash_map.count(array[i])){
			pairs++; 
		} else {
			hash_map.insert(target - array[i]); 
		}
	}

	return pairs; 
}

int main(){
	int n, x, target; 
	vector<int> array; 

	cin >> n >> target; 
	for(int i=0; i<n; i++){
		cin >> x; 
		array.push_back(x); 
	}


	cout << fasterPairCount(array, target) << endl; 


	return 0;
}