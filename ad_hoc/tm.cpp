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
  	int i, j = 0 , test, m, n, one_i = -1, two_i = -1, three_i = -1;
  	vi a, b, c;
	cin >> n;
	rep(i, n){
		cin >> j;
			if(j == 1) a.push_back(i+1);
			if(j == 2) b.push_back(i+1);
			if(j == 3) c.push_back(i+1);
	}
	int sm = min(min(a.size(), b.size()), c.size());
	printf("%d\n", sm);
	rep(i, sm){
		printf("%d %d %d\n", a[i], b[i], c[i]);
	}
}

