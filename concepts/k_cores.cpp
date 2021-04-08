// https://www.geeksforgeeks.org/find-k-cores-graph/
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

vector<vector<int>> g1, g;

void p_map(map<int, int> mp){
	for(auto it = mp.begin(); it != mp.end(); it++){
		cout << it->first << " : " << it->second << endl;
	}
	cout << "\n";
}

vi recompute_deg(map<int, int> mp){
	int l = INT_MAX, idx = 0;
	for(auto it = mp.begin(); it != mp.end(); it++){
		//cout << "Degree for " << it->first << " : " << it->second << endl;
		if(it->second < l) {
			l = it->second;
			idx = it->first;
		}
	}
	return {l, idx};
}


int main()
{
  	ll i, j, test, m, n, x, y;
 	
	g = {{0,1,1,1,0,0},
		 {1,0,1,1,1,0},
		 {1,1,0,1,0,0},
		 {1,1,1,0,1,0},
		 {0,1,0,1,0,1},
		 {0,0,0,0,1,0}};

	cout << "Enter k: ";	
	cin >> x;	
	
	n = g.size();

	map<int, int> mp;
	rep(i, n){
		y=0;
		rep(j, n){
			if(g[i][j] != 0) y += g[i][j]; 
		}
		mp[i] = y;
	}	
	
	vi temp = recompute_deg(mp);
	int low_deg = temp[0], start = temp[1];
	
	//removing edges means severing all their connections; set to -1
	while(low_deg < x){
		cout << "Lowest deg: " << low_deg << ", removing node " << start << endl;
		//p_map(mp);
		
		mp.erase(start); 
		// also update the degrees of each vertex
		rep(i, n){
			rep(j, n){
				if(g[start][j] && g[j][start]){
					mp[j]--;
					g[start][j] = 0;
					g[j][start] = 0;
				}
			}
		}		
	
		rep(i, n) g[start][i] = 0;
		rep(i, n) g[i][start] = 0;
		
		vi r = recompute_deg(mp);
		low_deg = r[0]; start = r[1];
		
		cout << "\nLowest deg: " << low_deg << "\n";
		p_map(mp);
	}
	
	cout << "New graph with all connected components having degree at least " << x << "\n";
		
	rep(i, n){
		rep(j, n) cout << g[i][j] << "\t";
		cout << "\n";
	}
}


