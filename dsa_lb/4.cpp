#include <vector>
#include "utilities.h"
using namespace std;

vector<int> moveNegativesToEnd(vector<int> a){
	vector<int> b(a.size());
	int fp = 0, lp = a.size()-1, i=0;

	for(int i=0; i<a.size(); i++){
		if(a[i]>=0){
			b[fp] = a[i]; 
			fp++;
		} else {
			b[lp] = a[i]; 
			lp--; 
		}
	}

	return b; 
}

int main(){
	vector<int> a = {-1,2,3,4,5,-5,6,-7,9};

	a = moveNegativesToEnd(a); 
	printIntegerVector(a); 
}