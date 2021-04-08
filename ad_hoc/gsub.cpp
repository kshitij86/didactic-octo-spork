#include <bits/stdc++.h>
using namespace std;

#define pub push_back;
#define pob pop_back;
#define REP(i, m, n) for(i=m;i<n;i++)
#define rep(i, n) REP(i, 0, n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;


int findGsub(int *arr, int n){
	assert(n>=2);
	int f, p, i, j, max_len = INT_MIN;
	rep(i, n){
		f = i;
		p = f+1;
		set<int> st;
		bool flag = true;
		st.insert(arr[f]);
		REP(j, p, n){
			// Found a duplicate
			if(st.find(arr[j]) != st.end()){
				flag = false;
				break;
			} else {
				st.insert(arr[j]);
			}
		}
		if(flag == true)
			if((p-f)+1 > max_len) max_len = (p-f)+1;
	}
//	rep(i, p){
//		cout << endl << arr[i] << " : " << endl;
//	}
	return max_len;
}

vi ret;
void printSubArrays(vector<int> arr, int start, int end) 
{       
    if (end == arr.size())  
        return; 
        
    else if (start > end)  
        printSubArrays(arr, 0, end + 1); 
            
    else
    {
		vi b;
		bool flag = true; 
        for (int i = start; i < end; i++){ 
        	b.push_back(arr[i]);
			if(arr[i] == arr[i+1]) flag = false;
		}
        if(flag == true){
			ret.push_back(b.size());	
		//for(int i = 0; i<b.size(); i++){
			//	cout << b[i] << " ";
			//}
			//cout << endl;
		}
        printSubArrays(arr, start + 1, end); 
    } 
      
    return; 
} 

int main()
{
  	int i, j, test, m, n, x, y;
	cin >> test;
    
    while(test--){
		cin >> m >> n;
		vi arr(m);	
		rep(i, m){
			int p; cin >> p;
		 	arr[i] = p;
		}
		rep(i, n){
			cin >> x >> y;
			arr[x-1] = y;	
			ret.clear();
			printSubArrays(arr, 0, 0);
			cout << *max_element(ret.begin(), ret.end()) + 1 << endl;
		}
	} 
}

