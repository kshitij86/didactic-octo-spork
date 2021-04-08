#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a == b) return a;
	if(a > b) return gcd(a-b, b);
	return gcd(a,b-a);
}

int main(){
	int i, j, n, k;
	cin >> n >> k;
	int a[n];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = n-1; i > -1; i--){
		j = i;
		int temp = a[i];
		while(1){
			int d = j/k;
			
			if(d == (i + k) % n) break;
			
			a[j] = a[d];
			j = d;
			
			for(int i = 0; i < n; i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
		a[j] = temp;
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
