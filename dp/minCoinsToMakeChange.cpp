#include<bits/stdc++.h>
using namespace std;


long mininimumCoins(long amount, vector<int> denominations){
	vector<int> dp(amount+1);
	fill(dp.begin(), dp.end(), INT_MAX);
	
	dp[0] = 0;
	for(int x: denominations){
		for(int i=0; i<amount+1; i++){
			if(x <= i){
				dp[i] = min(1 + dp[i-x], dp[i]);
			}
		}
	}

	return (long long) dp[dp.size()-1];
}

int main(){
	
	long amount = 10;
	vector<int> denominations = {1,2,4};

	printf("%ld\n", mininimumCoins(amount, denominations));

}