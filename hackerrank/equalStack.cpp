#include <bits/stdc++.h>
using namespace std;

const int MAX  = 100005;

void printA(int *a, int n){	
	
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

}

int main(void){		
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int x[MAX] = {0}, y[MAX] = {0}, z[MAX] = {0};
	
	// input
	for(int i=0; i<a; i++){
		cin >> x[i];
	}	
	
	for(int i=0; i<b; i++){
		cin >> y[i]; 
	}
	
	for(int i=0; i<c; i++){
		cin >> z[i];
	}		

	// reverse stacks
	reverse(x, x+a);
	reverse(y, y+b);
	reverse(z, z+c);
	
	// sum arrays
	int d[MAX] = {0}, e[MAX] = {0}, f[MAX] = {0}; 
	
	d[0] = x[0];
	e[0] = y[0];
	f[0] = z[0];	

	for(int i=1; i<a; i++){
		d[i] = x[i]+d[i-1];	
	}
		
	for(int i=1; i<b; i++){
		e[i] = y[i]+e[i-1];	
	}
	
	for(int i=1; i<c; i++){
		f[i] = z[i]+f[i-1];	
	}
	
	
	// reverse stacks
	reverse(d, d+a);
	reverse(e, e+b);
	reverse(f, f+c);

	int lim = min(a, min(b, c)), itr = 0;
	while(lim--){
		if(d[itr] == e[itr] && e[itr] == f[itr]){
			break;
		}
		itr++;
	}	

	cout << "----------------------" << endl;
	cout << d[itr] << endl; 



	printA(d, a);	
	printA(e, b);	
	printA(f, c);	
}	
