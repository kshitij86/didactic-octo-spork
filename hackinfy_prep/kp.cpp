#include <bits/stdc++.h>
using namespace std; 

const double MAX = 10e8; 

vector<pair<char,int>> m; 

int main(){
	int n, t, y, z;
	char x; 
	cin >> n >> t;

	for(int i=0; i<n; i++){
		scanf("%d %d", &z, &y);
		x = (char)(z+97); 
		m.push_back(make_pair(x, y)); 
	}

	int slowkey = INT_MIN; 
	char slowchar;
	for(int i=0; i<m.size()-1; i++){
		int kptime = (m[i+1].second - m[i].second); 
		if(kptime > slowkey){
			slowkey = kptime;
			slowchar = m[i+1].first; 
		}
	}

	printf("%c\n", slowchar); 
}