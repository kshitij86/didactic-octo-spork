//April Long challenge (Worthy Matrix) for 40 points
#include<bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;

int main(){

    int tc = 1; cin>>tc;
    for(int t = 0; t < tc; t++){
        int n, m, k; cin>>n>>m>>k;
        int mat[n][m];
        for(int i= 0; i < n; i++){
            for(int j  =0; j < m; j++)cin>>mat[i][j];
        }

        ll sum[n+1][m+1] = {};
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                sum[i][j] = sum[i-1][j] + sum[i][j-1] + mat[i-1][j-1] - sum[i-1][j-1];
            }
        }

        ll ans = 0;
        for(int r1 = 1; r1 <= n; r1++){
            for(int c1 = 1; c1 <= m; c1++){
                int r2 = r1, c2 = c1;
                while(r2 <= n && c2 <= m){
                    ll cur = sum[r2][c2] - sum[r1-1][c2] - sum[r2][c1-1] + sum[r1-1][c1-1];
                    ll ele = (r2-r1+1)*(r2-r1+1);
                    ans += (cur >= k*ele);
                    r2++, c2++;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
