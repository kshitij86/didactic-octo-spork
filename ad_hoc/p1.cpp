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
  int i, j, test, m, n, x, y;
    cin >> test;
    while(test--){
		cin >> n;
		int arr[n];
		vi e, o;
		rep(i, n){
			cin >> arr[i];
			if(i%2 != arr[i]%2 && arr[i]%2 == 0) e.push_back(arr[i]);
			if(i%2 != arr[i]%2 && arr[i]%2 != 0) o.push_back(arr[i]);
		}
		if(e.size() == o.size()){
			cout << e.size() << endl;
		} else {
			cout << -1 << endl; 
		}
	} 
}

