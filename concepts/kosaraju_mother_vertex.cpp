// https://www.geeksforgeeks.org/find-a-mother-vertex-in-a-graph/
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

vvi g1;
vi track_dfs;

void dfs(int i){
	stack<int> s;
	int vis[g1.size()];
	memset(vis, 0, sizeof(vis));
	
	s.push(i);	

	while(!s.empty()){
		int k = s.top();
		vis[k] = 1;
		s.pop();
		// keep track of vertices visited during dfs
		if(find(track_dfs.begin(), track_dfs.end(),k) == track_dfs.end())
			track_dfs.push_back(k);
		for(int j = 0; j < g1.size(); j++){
			if(g1[k][j] == 1 && vis[j] == 0) s.push(j);	
		}
	}
}

int main()
{
  	ll i, j, test, m, n, x, y;
	g1 = {{0,1,1,1},
		  {-1,0,1,0},
		  {-1,-1,0,-1},
		  {-1,0,1,0}};	
	
	dfs(0);
	rep(i, track_dfs.size()) cout << track_dfs[i] << " ";
	
}


