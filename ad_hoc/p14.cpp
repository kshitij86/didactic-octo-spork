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
    
 	cin >> n;
	ll a[n];
	rep(i, n) cin >> a[i];
	
	cin >> m;
	ll b[m];
	rep(i, m) cin >> b[i]; 

	sort(a, a+n);
	sort(b, b+m);
	
	x = 0; y = 0; int p = 0;	
	while(x < n && y < m){
		//cout << "Pair: " << a[x] << " " << b[y] << endl;
		if(abs(a[x] - b[y]) < 2) {
			x++;
			y++;
			p++;
		} else if(a[x] > b[y]) y++;
		else x++;
	}
	cout << p<< endl;
}

