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
  	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int i, j, k, test, m, n;
 	
	cin >> test;
    rep(k, test){
		cin >> n >> m;
		int a[n], b[n];
		rep(i, n){
			cin >> a[i];
		}
		rep(i, n){
			cin >> b[i];
		}
		
		vi good;
		//count good pairs before hand
	
		rep(i, n){
			if(a[i] + b[i] <= m) good.push_back(i);
		}
	
		bool gf2 = true;
	
		rep(i, n){
			if(a[i] == m || b[i] == m){
				cout << "No" << endl;
				gf2 = false;
				break;
			}
			if(a[i] + b[i] > m){
				// try to swap with good pairs
				bool gf1 = false;
				rep(j, good.size()){
					if(a[i] + b[j] <= m && a[j] + b[i] <= m){
						gf1 = true;
						//swap(b[i], b[j]);
						good.erase(good.begin() + j);
						break;
					}
				}
				if(gf1 == false){
					gf2 = false;
					cout << "No" << endl;
					break;
				}
			}
		}
		if(gf2 == true) cout << "Yes" << endl;
	}
}

