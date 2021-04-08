/******************************************
* AUTHOR : akane86/klondike123 *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define nl "\n"
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;


void sh_vi(vi a){
	for(auto i: a){
		cout << i << " "; 		
	}
	cout << nl;
}

void target_sum(int n, int *arr, int t){
	map<int, int> hash_map;
	rep(i, n){
		if(hash_map.find(arr[i]) != hash_map.end()){
			cout << i << " " << hash_map[arr[i]];
			return;
		}
		else hash_map[t - arr[i]] = i;
	}
	cout << -1 << nl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	LL a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,x,y,z,t;
	//ios_base& scientific (ios_base& str);

	cin >> n >> t;
	int arr[n];

	rep(i, n) cin >> arr[i];
	
	target_sum(n, arr, t);

	return 0;
}