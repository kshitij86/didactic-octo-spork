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

// to find number of connected components in graph
/*
	g1->	1 - 2
			|	|
			3 - 4   5
	
	g2-> 	1   2
	
	g3-> 	  1		4 - 5  6
			 / \
			2 - 3  
	

*/

vector<vector<int>> g1, g2, g3;
int v1[5], v2[2], v3[6], conn = 0;

void dfs(int i, vector<vector<int>> g, int *visited){
	stack<int> s;
	s.push(i);
	while(!s.empty()){
		int k = s.top();
		s.pop();
		visited[k] = 1;
		for(int j = 0; j < g.size(); j++){
			if(g[k][j] && !visited[j]) s.push(j);	
		}
	}
	conn++;
}

int main()
{
	ll i, j, test, m, n, x, y;
  	
	g1 = {{0,1,1,0,0},
		  {1,0,0,1,0},					 
          {1,0,0,1,0},
		  {0,1,1,0,0},					 
		  {0,0,0,0,0}};
	memset(v1, 0, sizeof(v1));

	g2 = {{0,0}, {0,0}};
	memset(v2, 0, sizeof(v2));
	
	g3 = {{0,1,1,0,0,0},
		  {1,0,1,0,0,0},
		  {1,1,0,0,0,0},
		  {0,0,0,0,1,0},
		  {0,0,0,1,0,0},
		  {0,0,0,0,0,0}};
	memset(v3, 0, sizeof(v3));
		
	rep(i, g1.size()){
		if(!v1[i]) dfs(i, g1, v1);
	}
	cout << conn << "\n";
	conn = 0;
	rep(i, g2.size()){
		if(!v2[i]) dfs(i, g2, v2);
	}
	cout << conn << "\n";
	conn = 0;
	rep(i, g3.size()){
		if(!v3[i]) dfs(i, g3, v3);
	}
	cout << conn << "\n";
}
