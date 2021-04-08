#include <bits/stdc++.h>
using namespace std;

#define pub push_back;
#define pob pop_back;
#define REP(i, m, n) for(i=m;i<n;i++)
#define rep(i, n) REP(i, 0, n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;



int main()
{
  int i;

    int test, a, b;
    cin >> test;
    
    while(test--){
		cin >> a >> b;
		if(a == 1 || b == 1) cout << "NO" << endl;
		if(a>(b/2)) cout << "YES" << endl;
	}  
	return 0;
}

