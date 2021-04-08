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

double distance(double x){
	return sqrt((x*x) + 1);
}

float herons(double a, double b, double c){
	double s = (a+b+c)/2;

	return sqrt(s * (s-a) * (s-b) * (s-c));
}

int past(double n, double *arr){
	unordered_set<float> areas;

	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			float a = herons(abs(arr[i] - arr[j]), distance(arr[i]), distance(arr[j]));
			if(areas.find(a) == areas.end() && a != 0) areas.insert(a);
		}
	}

	// for(auto i: areas) cout << i << " ";
	// cout << nl << nl;

	return areas.size();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	LL a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,x,y,z,t;
	//ios_base& scientific (ios_base& str);
	cin >> t;
	while(t--){
		cin>>n;
		
		double arr[n];
		rep(i, n) cin >> arr[i];

		printf("%d\n", past(n, arr));
	}
	
	

	return 0;
}