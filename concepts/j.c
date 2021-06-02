#include <stdio.h>

int main(){
	while(1){
		if(fork()){
			printf("parent"); 	
		} else {
			printf("child"); 	
		}
	}
}
