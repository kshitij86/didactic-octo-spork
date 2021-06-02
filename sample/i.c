#include <stdio.h>

int f(int n){
	static int i; 
	if(n<1) return 1;
	else {
		i++; 
		return i + f(n-3) + i + f(n-2) + i + f(n-1);  	
	}
}

int main(){
	
	printf("%d\n", f(3)); 
}
