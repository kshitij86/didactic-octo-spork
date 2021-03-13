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
#define chalte_conti continue
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

auto give_me_mydL(v64 a, ll parm)
{
    return lower_bound(a.begin(), a.end(), parm);
}

auto give_me_mydU(v64 a, ll parm)
{
    return upper_bound(a.begin(), a.end(), parm);
}

int main()
{
    /*
        n -> friends, each order 1 item
        a -> egg
        b-> milk
        c -> cake

        // wrong way to find out 
        //find out if we can even feed them
        if ((e / 2 >= n) || (h / 3 >= n) || ((e + h) / 2 >= n))
        {
            
        }
    */
    fast_cin();
    ll t, n, e, h, a, b, c, i;

    cin >> t;
    while (t--)
    {
        vector<long long> mak, pak;

        cin >> n >> e >> h >> a >> b >> c;
        for (int i = 0; i <= n + 1; i++)
        {
            mak.push_back(i);
        }

        for (i = 0; i <= n; i++)
        {
            ll id1 = lower_bound(mak.begin(), mak.end(), (2 * n - e - 2 * i)) - mak.begin();
            ll id2 = upper_bound(mak.begin(), mak.end(), (h - 3 * i)) - mak.begin() - 1;

            if (id2 < id1 || id1 == (n + 1))
                continue;
            if (id1 == (n + 1) && id2 + 3 * i > h)
                continue;

            ll k;
            if (c > a)
                k = (id1 < (n - i) ? id1 : (n - i));
            else
                k = (id2 < (n - i) ? id2 : (n - i));

            ll x = n - k - i;
            if (k + 2 * i >= 2 * n - e && k + 3 * i <= h)
            {
                pak.push_back(a * x + b * i + c * k);
            }
        }

        if (pak.size() == 0)
            cout << -1 << "\n";
        else
        {
            ll mi = INT_MAX;
            for (auto itr : pak)
            {
                mi = min(mi, itr);
            }

            cout << mi << endl;
        }
    }
    return 0;
}