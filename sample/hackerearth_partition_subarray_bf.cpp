#include <bits/stdc++.h>
#include <fstream>
using namespace std;

#define flag printf("-------------------------------")

vector<int> arr;

void sep_lines(int x){
	for(int i=0; i<x; i++)
		printf("-");
}

bool partitionWithoutIndex(int idx){
	int val = arr[idx], sumL, sumR;
	
	//arr.erase(arr.begin() + idx);
	arr[idx] = 0;	

	sumL = arr[0];
	sumR = 0;

	//calculate right sum
	for(int i=1; i<arr.size(); i++){
		sumR += arr[i];
	}

	int itr = 1;
	while(itr < arr.size()-1){
		if(sumL == sumR)
		{
			printf("Can be partitoned by removing: %d at index: %d\n", val, idx);
			printf("sumL: %d and sumR:  %d are equal!\n", sumL, sumR);
			return true;
		}	
		sumR -= arr[itr];
		sumL += arr[itr];
		itr++;
	}
	
	// place val back at idx
	arr[idx] = val;	
	
	return false;
}

int main(){
	
	int n; 
	fstream fin;
	
	fin.open("input.txt");
	
	fin >> n;

	while(n--){
		int x;
		fin >> x;
		arr.push_back(x);
	} 	
	fin.close();
	
	bool canPartition = false;
	
	for(int i=0; i<arr.size(); i++){
		if(partitionWithoutIndex(i)){
			canPartition = true;
			break;
		}
	}	

	canPartition ? cout << "YES\n" : cout << "NO\n"; 

	return 0; 
}
