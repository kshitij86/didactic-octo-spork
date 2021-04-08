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
	cin >> i;
	if(i > 0){
		cout << i << endl;
	} else {
		i = abs(i);
		int x = i%10;
		int y = i%100;
		if(x > y){
			i = i/10;	
		} else {
			i = i/100 + (x*10);
		}
		cout << "-" << i << endl;
	}
  /*
    cin >> test;
    
    while(test--){}
  */
  
}

