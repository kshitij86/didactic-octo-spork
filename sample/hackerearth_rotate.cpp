#include <bits/stdc++.h>
using namespace std;

void naiveRotate(int *arr){
    int n = sizeof(arr)/sizeof(int);

    int last = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}


// reversal algorithm
vector<int> reversalRotate(vector<int> arr, int d){
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.end());

    return arr;
}

int main(){
    ifstream fin;
    ofstream fout;
   	int test, a, b, c, d, x, y, z;
   
    fin.open("input.txt");
    fout.open("output.txt");

	fin >> test;
    while(test--){
        fin >> a >> b;
        vector<int> arr(a);
        for(int i=0; i<a; i++){
            fin >> x;
            arr[i] = x;
        }

        b = b%a;
        arr = reversalRotate(arr, b);

        for(int i=0; i<a; i++){
            fout << arr[i] << " ";
        }
        fout << endl;
    }
}
