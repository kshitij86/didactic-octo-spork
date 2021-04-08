    #include<stdio.h>
     
    void gen_prime(int a, int b){
    	int p = 2;
     
    	int x[b+1];
    	for(int i = 0; i <= b+1; i++) x[i] = 1;
     
    	for(int p = 2; p*p <= b; p++){
    		if(x[p]){
    			for(int i=p*p; i <= b; i += p)
    				x[i] = 0;
    		}
    	}
     
    	for(int i = 0; i < b+1; i++){
    		if(x[i] && (i >= a && i <= b+1) && i != 1)
    			printf("%d\n", i);
    	}
    	printf("\n");
    }
     
    int main(){
    	long test, a, b;
     
    	scanf("%ld", &test);
     
    	while(test--){
    		scanf("%ld %ld", &a, &b);
    		gen_prime(a, b);
    	}
     
     
    	return 0;
    }