#include <bits/stdc++.h>
using namespace std;

string suffixSort(string c, int k){
	
	int n = c.length(), prefix_len = 1;
	vector<string> store;

	while(true){
		if(prefix_len == n) break;
		string h = "";
		h += c[n-1];
		for(int j=n-1; j>((n-1)-prefix_len); j--){
			h += c[j];
		}
		store.push_back(h);
		prefix_len++;
	}
	
	for(string i: store){
		cout << i << endl;
	}	

	return "done";

}

int main(void){
	int k;
	string c;

	cin >> c >> k;
	
	cout << suffixSort(c, k);
	
	return 0;	
}
