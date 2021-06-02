#include<bits/stdc++.h>
using namespace std; 

typedef long long ll; 

ll k[300][300]; 

vector<char> dfs(int start, int n, string x){
	vector<char> beaut; 
	stack<int> s; 
	s.push(start); 
	int visited[n] = {0}; 

	while(!s.empty()){
		int node = s.top();
		beaut.push_back(x[node]); 
		s.pop(); 
// 		printf("%d->", node); 
		visited[node] = 1; 
		for(int i=0; i<n; i++){
			if(!visited[i] && (k[node][i] == 1)){
				s.push(i); 
			}
		}
	}
// 	for(int i=0; i<n; i++){
// 	    cout << visited[i] << endl;    
// 	}

	return beaut; 
}

int main(){
	ll n, m;
	string s; 
	cin >> n >> m; 

	ll x[m], y[m];
	for(int i=0; i<m; i++)
		cin >> x[i]; 
	for(int i=0; i<m; i++)
		cin >> y[i];
	
	cin >> s; 

	memset(k, 0, sizeof(k));

	for(int i=0; i<m; i++){
		k[x[i]-1][y[i]-1] = 1; // directed
	}

	vector<vector<char>> u; 
	for(int i=0; i<n; i++){
		vector<char> t = dfs(i, n, s); 
		u.push_back(t);
	}
    
    cout << endl; 

    int ma = INT_MIN; 
    for(auto dlist: u){
        int simCount = 0; 
        set<char> x; 
        for(int i=0; i<dlist.size(); i++){
            if(!x.count(dlist[i])){
                x.insert(dlist[i]); 
            } else{
                simCount++; 
            }
        }
        
        ma = max(simCount, ma); 
    }

    cout << ma << endl; 

}

/*
4
3
1 1 1
2 3 4
abcde
*/
