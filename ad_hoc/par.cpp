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
		m = 0;
		rep(i,n){	
			cin >> j;
			if(i%2 != j%2) m++;
		}
		cout << (m%2 == 0) << endl;
	}
  
}

