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
  	int i, j, test, m, n, x, y;
   	cin >> test;
    
    while(test--){
		cin >> n;
		int a[n][3];
		rep(i, n){
			rep(j, 3) cin >> a[i][j];
		}
		int mp = INT_MIN;
		rep(i, n){
			int p;
			if(a[i][1]%a[i][0] == 0)
				p = a[i][2] * (a[i][1]/(a[i][0] + 1));
			else
				p = a[i][2] * floor(a[i][1]/(a[i][0] + 1));
			if(p > mp) {
				mp = p;
			} 
		}
		cout << mp << endl;
	}
  
}

