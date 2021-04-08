#include <bits/stdc++.h>
using namespace std;

#define add push_back;
#define rem pop_back;
#define REP(i, m, n) for(i=m;i<n;i++)
#define rep(i, n) REP(i, 0, n)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;


struct MinStack{
	// Stack that returns minimum element in stack in O(1);
	stack<pair<int, int>> st;
	int min = INT_MAX;
};

void minPush(MinStack &ms, int value){
	
	pair<int, int> p = make_pair(value, value);
	
	if(!ms.st.empty()){
		if(value > ms.min){
			p.second = ms.min;
		} else if(value < ms.min) {
			ms.min = value;
		}
	} else ms.min = value;
	ms.st.push(p);	
}

int getMin(MinStack &ms){
	return ms.min;
}

// Handle if minimum is deleted, need to store prev minimum also 
void minPop(MinStack &ms){
	if(ms.st.top().first == ms.st.top().second){
		// Attempting to delete current min
		ms.st.pop();
		if(!ms.st.empty()){
			// New minimum is the value on top of stack
			ms.min = ms.st.top().second;
		} else {
			ms.min = -1;
		}
	}
	else ms.st.pop();
}

void displayTop(MinStack &ms){
	printf("Top of stack: %d %d\n", ms.st.top().first, ms.st.top().second);
}


int main()
{
 	MinStack g;

	minPush(g, 1);
	displayTop(g);	
	minPush(g, 2);
	displayTop(g);		
	minPush(g, 3);
	displayTop(g);	
	minPush(g, 0);
	displayTop(g);

	printf("Minimum: %d\n", getMin(g));
	minPop(g);
	printf("Minimum: %d\n", getMin(g));
	minPop(g);
	minPop(g);
	minPop(g);
	printf("Minimum: %d\n", getMin(g));
}
