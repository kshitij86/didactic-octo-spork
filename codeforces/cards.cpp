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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	LL a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,x,y,z,t;
	//ios_base& scientific (ios_base& str);
		
	cin >> t;
	while(t--){
		cin>>a>>b>>n;
		i = 1;
		while(a%2  == 0){
			a /= 2;
			i *= 2;
		}
		while(b%2 == 0){
			b /= 2;
			i *= 2;
		}
		i >= n ? printf("YES\n") : printf("NO\n");;
	}
	
	

	return 0;
}