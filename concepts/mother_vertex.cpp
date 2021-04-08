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

vector<vector<int>> g1;

int dfs_count_conn(int a){
	stack<int> s;
	s.push(a);
	set<int> visited;
	visited.insert(a);
	
	while(!s.empty()){
		int k = s.top();
		cout << "Visited: " << k << "\n";
		visited.insert(k);
		s.pop();
		for(int i=0; i<g1.size(); i++){
			if(g1[k][i] == 1 && !visited.count(i)){ 
				s.push(i);
			}
		}
	}
	return visited.size();
}

int main(){
	
	ll i, j, test, m, n, x, y;
	g1 = {{-1,0,1,0},
		  {-1,-1,0,-1},
		  {-1,0,1,0},
		  {0,1,1,1}};
		
	int reach;
	
	rep(i, g1.size()){
		reach = dfs_count_conn(i);
		cout << "Node id: " << i << " can reach: " << reach << "\n";
		if(reach == g1.size()-1) break;	
	}
	
	cout << i  << " is a mother vertex" << "\n";
	
}


