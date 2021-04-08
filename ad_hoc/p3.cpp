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
  	int i, j, test, m, n, y;
  	string x;

  	getline(cin, x);
  	map<char, int> freq_count;
  	rep(i, x.length()){
  		if((x[i] >= 'a' && x[i] <= 'z')){
  			if(freq_count.find(x[i]) == freq_count.end()){
  				freq_count[x[i]] = 1;
  			}
  		}
  	}	
	cout << freq_count.size() << endl;
}

