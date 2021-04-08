#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a == b) return a;
	if(a > b) return gcd(a-b, b);
	return gcd(a,b-a);
}

void rotate(int *a, int n){

}

int main(){
	int i, j, n, k;
	cin >> n >> k;
	int a[n];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < gcd(n, k); i++){
		j = i;
		int temp = a[i];
		while(1){
			int d = (j + k) % n;
			
			if(d == i) break;
			
			a[j] = a[d];
			j = d;
		}
		a[j] = temp;
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
