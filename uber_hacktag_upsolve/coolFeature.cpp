// Still not complete; cannot handle type 1 queries

#include <bits/stdc++.h>
using namespace std;

int pairsWithSum(vector<int> a, vector<int> b, int x){
	int nPairs = 0;
	set<int> saveForLater;

	// treat both arrays as onr big array	
	for(int i: b){
		a.push_back(i);
	}
	
	for(int i=0; i<a.size(); i++){
		if(saveForLater.count(a[i])){
			nPairs++;
		} else {
			saveForLater.insert((x-a[i]));
		}
	}
	
	return nPairs;	
}

void printStat(vector<int> v){
	cout << "Array after query: \n";
	for(int i: v){
		cout << i << "  "; 
	}
	cout << endl;
}

vector<int> coolFeature(vector<int> a, vector<int> b, vector<vector<int>> queries){
	vector<int> result;
	for(vector<int> q: queries){
		if(q[0] == 0){
			b[q[1]] = q[2];
		} else {
			// count pairs with sum x in a and b
			result.push_back(pairsWithSum(a, b, q[1]));
		}
		// debugging op
		printStat(a);
		printStat(b);
		cout << endl;
	}
	return result;
}

int main(){
	vector<int> a = {1, 2, 3}, b = {3, 4}; 
	vector<vector<int>> queries = {{1, 5}, {0, 0, 1}, {1, 5}};
	
	vector<int> r = coolFeature(a, b, queries);
	
	for(int x: r){
		cout << x << " ";	
	}
	return 0;	
}
