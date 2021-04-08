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
		int mnow = INT_MAX;
		cin >> n;	
		int a[n] = {0}, b[n] = {0}, c[n] = {-1};
		rep(i, n){
			cin >> a[i];	
		}
		if(n == 1){
			cout << a[0] << endl;	
		} else {
			
		rep(i, n){
			if(b[a[i]-1] == 0) c[a[i]-1] = i;
			b[a[i]-1]++;
		}
		rep(i, n)
			if(b[i] == 1) break;
	
		if(i < n-1)
			cout << c[i] + 1 << endl;
		else cout << -1 << endl;
		
		}	
		
	}
  
}

