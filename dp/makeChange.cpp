#include <bits/stdc++.h>
using namespace std;

vector<int> denos; 

void waysToMakeChange(int amt){
	int dp[amt+1] = {1};
	
	for(int i: denos){
		for(int j=1; j<amt+1; j++){
			if(j >= i){
				dp[j] += dp[j-i]; 
			} 
		}
	} 			
	cout << dp[amt] << endl;  
}

int main(){
	long amt = 400;
	denos = {1, 5, 10, 25}; 	
	
	waysToMakeChange(amt); 
}

