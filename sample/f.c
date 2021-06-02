#include <stdio.h>

int main(){
	printf("2\n"); 	
	if(fork() && fork()){
		fork(); 
		printf("2\n");
		fork(); 	
	} else {
		fork();
		fork(); 
	}
	printf("3"); 
}		
