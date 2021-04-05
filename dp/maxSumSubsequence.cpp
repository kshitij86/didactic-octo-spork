#include <bits/stdc++.h>
#include <fstream>
using namespace std;

typedef long long ll;

int maxSubsetSum(vector<ll> arr) {
    ll dp[100005] = {0};
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for(ll i=2; i<arr.size(); i++){
        dp[i] = max(dp[i-2] + arr[i], dp[i-1]);
    }
    return dp[arr.size()-1];
}


int main(int argc, char const *argv[])
{
    ifstream fin;
    ll n, x;
    vector<ll> arr;

    fin.open("input.txt");
    while(fin){
        fin >> n;
        for(ll i=0; i<n; i++){
            fin >> x;
            arr.push_back(x);
        }
    }

    cout << maxSubsetSum(arr) << endl;

    return 0;
}
