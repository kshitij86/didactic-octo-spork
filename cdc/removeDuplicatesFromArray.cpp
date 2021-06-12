#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> &A){
	vector<int> x; 
	unordered_set<int> t;
	t.insert(A[0]); 

	x.push_back(A[0]); 
	for(int i=1; i<A.size(); i++){
		if(!t.count(A[i])){
			t.insert(A[i]); 
			x.push_back(A[i]);
		}
	}

	return x; 
}

int main(){
	vector<int> u = {1,1,1,1,2,2,4,4,4,4,5};

	u = removeDuplicates(u); 
	for(int &a: u){
		cout << a << " "; 
	}
	cout << endl; 
}
