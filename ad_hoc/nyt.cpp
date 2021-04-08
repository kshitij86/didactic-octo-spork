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
	ll i, j, test, m, n, x, y;
	cin >> i >> j;
	
	bool flag = false;	
	m = 0;
	rep(n, i){
		cin >> x;
		m += x;
		if(m == j){
			flag = true;
			break;
		} else if(m > j){
			break;
		}
	}
	if(flag == true){
		cout << "YES" << endl;
	} else cout << "NO" << endl;
}

