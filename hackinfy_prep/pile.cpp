// https://prepinsta.com/hackwithinfy/coding/

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

void solve()
{
}
int main()
{
    fast_cin();
    ll t, x, y, i, m, n, a, b, c, s;
    int st[3];
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;
        st[0] = a;
        st[1] = b;
        st[2] = c;

        // Some piles must exist which have less than x and y stones
        /*
            1 2 3 
            x=1, y=1
            Not possible

            2 2 3
            1 1
            Not possible

            Either (s-k) does not satisfy
            Or x or y do are not big enough
        */

        // check if x and y are big enough
        if ((x < *min_element(st, st + 3)) || (y < *min_element(st, st + 3)))
        {
            cout << "NO" << endl;
        }
        else
        {
            //condition satisfied that x and y are big enough
            // here only (s-k) may not satisfy

            /*
                pair which satisfy 
                (ab) <- c
                (bc) <- a
                (ac) <- b
            */

            // printf("%d %d %d %d %d", a, b, c, x, y);

            bool possible = false;

            if (((x - a) + (y - b)) == c)
            {
                possible = true;
                printf("%d %d", (x - a) + (y - b), c);
            }

            else if (((x - b) + (y - a)) == c)
            {
                possible = true;
                printf("%d %d", (x - b) + (y - a), c);
            }

            else if (((x - b) + (y - c)) == a)
            {
                possible = true;
                printf("%d %d", (x - b) + (y - c), a);
            }

            else if (((x - c) + (y - b)) == a)
            {
                possible = true;
                printf("%d %d", (x - c) + (y - b), a);
            }

            else if (((x - a) + (y - c)) == b)
            {
                possible = true;
                printf("%d %d", (x - a) + (y - c), b);
            }

            else if (((x - c) + (y - a)) == b)
            {
                possible = true;
                printf("%d %d", (x - c) + (y - a), b);
            }

            possible == false ? cout << "NO" : cout << "YES";
            cout << endl;
        }
    }

    return 0;
}