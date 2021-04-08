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



int main()
{
  	ll x, y, z, t1, t2, t3;
	cin >> x >> y >> z >> t1 >> t2 >> t3;

	ll diff = abs(x-y), ele = abs(x-z);
	
	ll walk = t1 * diff, jump = (3*t3) + (ele * t2) + (diff * t2);
	
	if(walk < jump) cout << "NO" << "\n";
	else cout << "YES" << "\n";	
 	 
}


