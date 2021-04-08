#include <bits/stdc++.h>
using namespace std;

#define add push_back;
#define rem pop_back;
#define REP(i, m, n) for(i=m;i<n;i++)
#define rep(i, n) REP(i, 0, n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;

ll sod(ll n){
	ll s = 0;
	while (n != 0) {
      s = s + n % 10;
      n = n / 10;
   }
	return s;
}

bool isdup(ll n){
	set<ll> x;
	while(n != 0){
		ll r = n % 10;
		if(x.find(r) != x.end()) return false;
		else x.insert(r);
		n /= 10;
	}
	return true;
}

int main()
{
  ll i, j, test, m, n, x, y;
    cin >> test;
    
    while(test--){
		cin >> n;
		if(n < 10) cout << n << endl;
		else {
			REP(i, 10, 100000){
				if(sod(i) == n) break;
			}
			if(isdup(i)) cout << i << endl;
			else cout << -1 << endl; 
			}
	}
  
}

