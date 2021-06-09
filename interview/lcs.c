/* compute longest common subsequence between two strings
len(LCS) = max() 
*/
#include <stdio.h>
#define max(a,b) a > b? a : b 

int lcs(char *x, char *y, int m, int n){
	if(!n || !m)
		return 0; 
	if(x[n] == y[m]){
		return 1 + lcs(x, y, m-1, n-1);  
	}
	return max(lcs(x, y, n-1, m), lcs(x, y, m-1, n)); 
}

int main(){
	char *x = "ABCDGH", *y = "AEDFHR";
	int m = sizeof(x)/sizeof(x[0]); 
	int n = sizeof(y)/sizeof(y[0]); 
	printf("%d\n", lcs(x, y, m, n));
}
