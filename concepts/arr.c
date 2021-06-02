#include <stdio.h>

function(char **ptr){
	char **ptr1; 
	ptr1 = (ptr +=  sizeof(int))[-2]; 
	printf("%s\n", ptr1); 	
}

int main(){
	char *arr[] = {"ADA", "CN", "DBMS", "DISCRETE", "ALGEBRA"};
	function(arr);
}
