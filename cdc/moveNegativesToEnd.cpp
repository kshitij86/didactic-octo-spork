#include <bits/stdc++.h>
using namespace std;

vector<int> efficientMoveNegative(vector<int> A){
	// two pointer approach
	vector<int> B(A.size()); //initilazed with zeroes
	int last_ptr = A.size()-1, first_ptr = 0, i=0;

	while(i<A.size()){
		if(A[i] >= 0){
			B[first_ptr] = A[i];
			first_ptr++; 
		} else {
			B[last_ptr] = A[i]; 
			last_ptr--; 
		}
		i++; 
	}
	return B;
}

vector<int> moveNegative(vector<int> A){
	// crude way of doing things O(n)
	// takes too much space
	vector<int> pos, neg; 

	for(int i=0; i<A.size(); i++){
		if(A[i] >= 0){
			pos.push_back(A[i]); 
		} else {
			neg.push_back(A[i]); 
		}
	}
	for(int i=0; i<neg.size(); i++){
		pos.push_back(neg[i]); 
	}

	return pos; 
}

int main(){
	vector<int> A = {-1, -2, 3, -5, 6, 7, 8, -10};

	A = efficientMoveNegative(A);
	for(auto &i: A){
		cout << i << " "; 
	}
	cout << endl; 
}