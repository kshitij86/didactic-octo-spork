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

ll MOD = 10000007; 

ll fexpo(ll a, ll b){
	if(b == 0) return 1;
	if(b%2 == 0){
		return fexpo(1LL*a*a, b/2) % MOD;
	}
	return 1LL*a*fexpo(a,(b-1)) % MOD;
}


int main()
{
  	ll i, j, test, m, n, x, y;
 	
	cout << fexpo(5, 13) << "\n" ;
}


