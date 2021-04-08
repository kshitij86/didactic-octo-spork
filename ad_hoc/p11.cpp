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

string bady(ll n, string s){

    bool flag = false;

    if(s[0]=='2' and s[n-1]=='0' and s[n-2]=='2' and s[n-3]=='0') flag = true;
    if(s[0]=='2' and s[n-1]=='0' and s[n-2]=='2' and s[1]=='0') flag = true;
    if(s[0]=='2' and s[n-1]=='0' and s[2]=='2' and s[1]=='0') flag = true;
    if(s[0]=='2' and s[3]=='0' and s[2]=='2' and s[1]=='0') flag = true;
    if(s[n-4]=='2' and s[n-1]=='0' and s[n-2]=='2' and s[n-3]=='0') flag = true;


    if(flag) return "yES";
	return "nO";
    
}

int main()
{
 	int i, j, test, m, n, x, y;
	string s;
    cin >> test;
    
    while(test--){
		cin >> n;
		cin >> s;
		cout << bady(n, s) << endl;		
	}  
}

