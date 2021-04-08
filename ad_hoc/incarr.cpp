#include <bits/stdc++.h>
using namespace std;


long long sum = 0;

void incarr(long long *arr, int n){
  if(n == 1) return;
  if(arr[0] > arr[1]) {
    long long diff = (arr[0] - arr[1]);
    sum += diff;
    arr[1] += diff;
  }
  incarr(arr+1, n-1);
}


int main()
{
    int n;
    cin >> n;
    long long arr[n];
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<n;i++){
       cin >> arr[i];
    }
    
    incarr(arr, n);
    cout << sum << endl;
    return 0;
}

