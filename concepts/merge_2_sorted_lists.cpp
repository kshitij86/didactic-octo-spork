// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// Works but okay

 // } Driver Code Ends


int *merge(int arr1[], int arr2[], int n, int m) {
	int *newArr = (int *) malloc(n+m * sizeof(int));
	int f1 = 0, f2 = 0;
	
	int i = 0; //Points to newArr
	while(f1 < n && f2 < m){
		
		if(arr1[f1] < arr2[f2]){
			newArr[i] = arr1[f1];
			f1++;
			i++;
		} else if(arr1[f1] > arr2[f2]){
			newArr[i] = arr2[f2];
			f2++;
			i++;
		} else {
			newArr[i] = arr1[f1];
			newArr[i+1] = arr2[f2];
			i += 2;
			f1++; f2++;
		}
	}
	
	// Copy remaining elements if any
	if(f1 < n){
		for(int j=i,x=f1; j<n+m,x<n; j++,x++){
			newArr[j] = arr1[x];
		}
	} else if(f2 < n){
		for(int j=i,x=f2; j<n+m,x<m; j++,x++){
			newArr[j] = arr1[x];
		}
	}
	return newArr;
} 


// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    
	    int *newArr = merge(arr1, arr2, n, m); 
		for(int i = 0; i < n+m; i++)
			printf("%d ", newArr[i]);
	    
	    cout<<endl;
	}

	return 0; 
} 
