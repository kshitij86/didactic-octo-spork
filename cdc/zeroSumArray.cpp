// Find if there is a subarray with sum as zero

#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std; 


bool isZeroSumSubArray(vector<int> &A){
	/* All subset checking solution */
	int m, n, k, size = A.size(); 
	for(m=1; m<size; m++){
		for(n=0; n<size; n++){
			int su = 0, mcpy = m;
			k = n;
			while(mcpy--){
				cout << A[k] << " ";
				su += A[k];
			}
			cout << endl; 
			if(!su)
				return true; 
		}
	}
	return false; 
}

int main(){
	int n, i=0, x; 
	vector<int> A; 

	scanf("%d", &n); 
	for(; i<n; i++){
		scanf("%d", &x); 
		A.push_back(x); 
	}

	cout << isZeroSumSubArray(A) << endl; 
}