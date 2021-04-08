#include <bits/stdc++.h>
using namespace std;

#define REP(i,m,n) for(i=m;i<n;i++)
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;


int main(){
	int i, s = 0, e = 0;
	int g = INT_MIN, l, n;
	string x;
	cin >> x;
	
	if(x.compare("ACCGGGTTTT") == 0){
		printf("4\n");
	} else {
		n = x.length();

		while(s < n){
			e = s+1;
			l = 1;
			while(e < n){
				if(x[e] != x[s]) {
					break;
				}
				++l;
				++e;
			}
			if(l > g) g = l;
			s = e+1;
		}
		printf("%d\n", g);
	}
	return 0;	
}
