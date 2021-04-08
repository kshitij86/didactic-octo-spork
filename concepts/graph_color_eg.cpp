//link -https://www.codechef.com/LTIME75B/problems/TRIP2
 
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
  	ll i, j, test, m, n, x, y;
    cin >> test;
    
    while(test--){
        cin >> n >> m;
        int arr[n];
        rep(i, n) cin >> arr[i];
        bool can_color = true;
        int aval = m;
        vi col(m), col_dup;
        rep(i, m) col[i] = i+1;
        
        rep(i, n){
            aval = m;
            col_dup = col;
            if(arr[i] < 0){ 
                if(i == 0 && arr[i+1] != -1){
                    col_dup.erase(remove(col_dup.begin(), col_dup.end(), arr[i+1]), col_dup.end());
                } else if(i == n-1 && arr[i-1] != -1){
                    col_dup.erase(remove(col_dup.begin(), col_dup.end(), arr[i-1]), col_dup.end());
                } else {
                    col_dup.erase(remove(col_dup.begin(), col_dup.end(), arr[i-1]), col_dup.end());
                    col_dup.erase(remove(col_dup.begin(), col_dup.end(), arr[i+1]), col_dup.end());
                }
                if(col_dup.size() == 0) {can_color = false;  break;}
                arr[i] = col_dup[rand() % col_dup.size()];
            }
        }
        if(can_color == true){
            cout << "YES" << endl;
            rep(i, n) cout << arr[i] << " ";
        } else {
            cout << "NO";
        }
        cout << "\n";
    }
}
