#include <bits/stdc++.h>
using namespace std;

map<int, int> freqMap;

bool customComparator(int a, int b){
    return freqMap[a] <= freqMap[b];
}

vector<vector<int>> sortMatrixByOccurrences(vector<vector<int>> m) {    
    vector<int> straightMatrix;
    
    for(int i=0; i<m.size(); i++){
        for(int j=0; j<m[0].size(); j++){
            if(freqMap.count(m[i][j])){
                freqMap[m[i][j]]++;
            } else {
                freqMap[m[i][j]] = 1;
            }
            straightMatrix.push_back(m[i][j]);
        }
    }
    
    sort(straightMatrix.begin(), straightMatrix.end(), customComparator);
    
    // reverse diagonally fill matrix
    for(int i=0; i<=m.size()-1; i++){
        int x = i, y = 0;   
        while(x>=0){
            m[x][y]= straightMatrix[straightMatrix.size()-1];
            straightMatrix.pop_back();   
            x--;
            y++;
        }
    }
    
    for(int i=1; i<=m.size()-1;i++){
        int x = m.size()-2, y = i;   
        while(y<=m.size()-2){
            m[x][y] = straightMatrix[straightMatrix.size()-1];
            straightMatrix.pop_back();   
            x--;
            y++;
        }
    }
    
    return m;
}

int main(){
    vector<vector<int>> m = {{1,2},{2,0}};
    m = sortMatrixByOccurrences(m);

    for(vector<int> i: m){
        for(int j: i){
            cout << j << " ";
        }
        cout << endl;
    }
}
