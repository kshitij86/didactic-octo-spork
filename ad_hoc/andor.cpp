#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, x, i;
    cin >> t;
    while(t--){
        cin >> x;
        for(i = 1; i<x;i++){
            if((i&(x-i)) + (i|(x-i)) == x) break;
        }
        cout << i << " " << (x-i) << endl;
    }

	return 0;
}

