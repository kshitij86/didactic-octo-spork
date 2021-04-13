#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int main()
{
    fast_cin();
    ll t, n, m, k;
    cin >> t;
    while(t--){
		cin >> n >> m >> k; 
		ll mat[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> mat[i][j];				
			}
		}


		ll ran[n+1][m+1] = {};
		for(int i=0; i<=n; i++){
			for(int j=0; j<=m; j++){
				ran[i][j] = ran[i-1][j] + ran[i][j-1] + mat[i-1][j-1] - ran[i-1][j-1];
			}
		}

		ll ctr = 0;
		for(int r1=1; r1<=n; r1++){
			for(int c1=1; c1<=m; c1++){
				ll r2=r1, c2=c1;
				while(r2<=n && c2<=m){
					ll f = ran[r2][c2] - ran[r1-1][c2] - ran[r2][c1-1] + ran[r1-1][c1-1];
					ll mkc = (r2-r1+1)*(r2-r1+1);
					ctr += (f >= k*mkc);
					r2++; 
					c2++;
				}
			}
		}

		cout << ctr << endl; 
	}
	return 0;
}


/*
	2 	2 	3
	3 	4 	5
	4 	5 	5

	2 	4 	7
	5 	11 	19
	9 	20 	33
*/