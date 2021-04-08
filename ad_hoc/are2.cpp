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
            	bool flag = true;
			    cin >> n >> m;
                int a[n], b[n];
            	rep(i, n){
                        cin >> a[i];
                }
                rep(i, n){
                        cin >> b[i];
                }
			sort(a, a+n);
			sort(b, b+n, greater<int>());
			rep(i, n){
				if(a[i] + b[i] > m){
					flag = false;
					break;
				}
			}
			if(flag == true) cout << "Yes" << endl;
			else cout << "No" << endl;
	}
}
