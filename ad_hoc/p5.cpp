#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin  >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            a[i] = i + 1;
        }
		cout << endl;
        int temp = a[n-1];
        for(int i = n-1; i > 0; i--){
            a[i] = a[i-1];
        }
        a[0] = temp;
        
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
}
