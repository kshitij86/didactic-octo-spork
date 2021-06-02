#include <stdio.h>

int main(){
	int i=2; 
	while(i>0){
		i--;
		if(fork() || fork()){
			printf("Hi "); 
		}
	}
	return 0;
}

