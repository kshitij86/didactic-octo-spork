#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x, sum = 0, sum2 = 0;
	cin >> n;
	for(int i = 0; i < n-1; i++){
		cin >> x;
		sum += x;
	}
	
	for(int i = 1; i < n+1; i++)
		sum2 += i;

	cout << (sum2 - sum) << endl;
}
