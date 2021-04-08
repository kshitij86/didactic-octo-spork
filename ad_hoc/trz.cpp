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
	ll n;
	cin >> n;
	
	vi arr(2);
	for(int i = 1; i <= n; i++){
		if((i%2 == 0) && (i%5==0)){
			arr[0]++; arr[1]++;
		} else if (i%2 == 0){
			arr[0]++;
		} else if (i%5==0){
			arr[1]++;
		}
	}

	cout << min(arr[0], arr[1]) << endl;
}

