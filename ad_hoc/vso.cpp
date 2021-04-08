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
  	int i, j, test, m, n;
	cin >> n >> m;
	j = 0; i = 1;

	while(n != 0 || j != 0){
		if(n != 0)n--;	
		if(i % m == 0) j++;
		i++;
	}
	cout << i << endl;	
  
}

