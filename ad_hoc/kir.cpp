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


bool cmp(pi a, pi b){
	return a.first < b.first;
}

int main()
{
  int i, j, test, x, y, m, n;
    cin >> m >> test;
    vpi uwu(test);
	rep(i,test){
		cin >> x >> y;
		uwu[i].first = x;
		uwu[i].second = y; 
	}
	sort(uwu.begin(), uwu.end(), cmp);  
	bool flag = true;
	rep(i,test){
		if(m > uwu[i].first){
			m += uwu[i].second;
		} else {
			flag = false;
			break;
		}
	}
	if(flag == true){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

