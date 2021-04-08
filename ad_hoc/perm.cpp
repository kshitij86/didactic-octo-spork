#include <bits/stdc++.h>
using namespace std;

#define pub push_back;

#define REP(i, m, n) for(i=m;i<n;i++)
#define rep(i, n) REP(i, 0, n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;



int main()
{
    int n;
    cin >> n;
  	
	if(n == 1){
		cout << 1 << endl;
	}
	else if(n < 4){
        cout << "NO SOLUTION" << endl;
    } else if(n == 4){
        cout << "3 1 4 2" << endl;
    } else {
        for(int i = 1; i <=n; i+=2){
            cout << i << " ";        
        } 
        for(int i = 2; i <=n; i+=2){
            cout << i << " ";
        }
        cout << endl;
    }
}  
