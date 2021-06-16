// Kth max and min of element

#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
	int k = 5; // print the fifth max and min 
	vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; 

	// creates a min heap
	priority_queue<int> pqmax; 
	priority_queue<int, vector<int>, greater<int>> pqmin;  

	// simultaneously insert into both
	for(int i=0; i<arr.size(); i++){
		pqmax.push(arr[i]);
		pqmin.push(arr[i]); 
	}

	k--;
	while(k--){
		pqmax.pop();
		pqmin.pop();
	}

	printf("Kth max: %d, Kth min: %d\n", pqmax.top(), pqmin.top());

}