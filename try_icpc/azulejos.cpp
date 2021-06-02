#include<bits/stdc++.h>
using namespace std;

#define max 50e5

void pm(vector<vector<int>> a){
	for(vector<int> &i: a){
		for(int j: i){
			cout << j << " "; 
		}
		cout << endl;
	}
}

bool cmp(vector<int> a, vector<int> b){
	return a[1] < b[1];
}


int main(){
	int n, p, h, f=1;
	cin >> n;
	
	vector<vector<int>> m1(n, vector<int>(3)); 
	vector<vector<int>> m2(n, vector<int>(3)); 


	for(int i=0; i<n; i++){
		cin >> p;
		m1[i][0] = i+1;
		m1[i][1] = p;
	}

	for(int i=0; i<n; i++){
		cin >> h;
		m1[i][2] = h;
	}

	for(int i=0; i<n; i++){
		cin >> p;
		m2[i][0] = i+1;
		m2[i][1] = p;
	}

	for(int i=0; i<n; i++){
		cin >> h; 
		m2[i][2] = h;
	}

	sort(m1.begin(), m1.end(), cmp); // sort by non-decreasing price
	sort(m2.begin(), m2.end(), cmp); // sort by non-decreasing price

	for(int i=0; i<n; i++){
		// check validity of pair
		if(m21[i][2] > m2[i][2]){
			f = 0;
			break;
		}
	}

	if(f){	
		for(int i=0; i<n; i++){
			cout << m1[i][0] << " "; 
		}
		cout << endl;
		for(int i=0; i<n; i++){
			cout << m2[i][0] << " "; 
		}
		cout << endl;

	} else {
		cout << "impossible" << endl;
	}


	// for(int i=0; i<n; i++){
	// 	cout << "(" << m1[i][0] << " p:" << m1[i][1] << " h:" << m1[i][2] << ")";
	// }
	// cout << endl;
	// for(int i=0; i<n; i++){
	// 	cout << "(" << m2[i][0] << " p:" << m2[i][1] << " h:" << m2[i][2] << ") ";
	// }

}