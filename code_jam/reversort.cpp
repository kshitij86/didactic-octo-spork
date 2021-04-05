//https://codingcompetitions.withgoogle.com/codejam/round/000000000043580a/00000000006d0a5c

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

ll n, i, x, c = 0;
ll arr[200];

void printArr(ll arr[200], int n)
{
    ll i;
    forn(i, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(int caseNum)
{
    int cost = 0;
    forn(i, n - 1)
    {
        int min_idx = min_element(arr + i, arr + n) - arr;
        // cout << "min_idx: " << min_idx << endl;
        // printArr(arr, n);
        reverse(arr + i, arr + min_idx + 1);
        cost += (min_idx - i) + 1;
    }

    cout << "Case #" << caseNum << ": " << cost << endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        cin >> n;
        forn(i, n)
        {
            cin >> arr[i];
        }

        solve(++c);
    }

    return 0;
}