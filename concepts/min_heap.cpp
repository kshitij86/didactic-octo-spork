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


class MinHeap{
	public: 
	int heapSize;
	int list[1000];

	MinHeap(){
		heapSize = 0;
	//	memset(list, INT_MAX, sizeof(list));
	}	
	
	void insert(int);
	void minHeapify(int);
	void printHeapBFS();
	
};

void MinHeap::insert(int val){
	//Adds an element to the heap
	list[heapSize++] = val;
	//printf("size of Heap %d\n", heapSize);
	minHeapify(heapSize);
}

void swapInArr(int *p ,int *q){
	int temp;
	*p = temp;
	*p = *q;
	*q = temp;
}

void MinHeap::minHeapify(int pos){
	int parent = pos%2 != 0 ? (pos-1)/2 : (pos-2)/2;
	printf("Reheapifying from parent: %d\n", parent);	

	//Find correct place for the element at last place 
	while(list[pos] < list[parent] && parent >= 0){	
		swapInArr(&list[pos], &list[parent]);
		pos = parent;
		parent = pos%2 != 0 ? (pos-1)/2 : (pos-2)/2;
	}
	printHeapBFS();
		
}

void MinHeap::printHeapBFS(){
	//Print a BFS of the heap
	for(int i= 0; i < heapSize; i++){
		printf("%d ", list[i]);
	}
	printf("\n");
		
}

int main(){
	MinHeap heap;
	heap.insert(2);
	heap.insert(1);
	heap.insert(3);	
	heap.insert(4);	
	heap.insert(5);	
}


