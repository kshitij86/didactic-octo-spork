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

const int MAX = 1e7;

struct Queue{
	int *Q, front, rear,size;
};	


 void make_queue(struct Queue *q, int size){
		q->size = size;
		q->front = q->rear = -1;
		q->Q = (int*)malloc(q->size*sizeof(int));
		cout << "Queue created\n";
	}
	
	void enqueue(struct Queue *q, int val){
		if(q->rear == q->size-1){
			cout << "Queue is full";
			return;
		}
		q->Q[++q->rear] = val;
		cout << val << "inserted\n";
	}
	
	void dequeue(struct Queue *q){
		if(q->front == q->rear){
			cout << "Queue is already empty";
			return;
		}
		q->front++;
	}
	
	void display_queue(struct Queue *q){
		for(int i = q->front+1; i <= q->rear; i++)
			cout << q->Q[i] << " ";
		cout << endl;
	}	

int main(){
	
	struct Queue q;
	make_queue(&q,5);
	enqueue(&q, 3);
	enqueue(&q, 3);
	enqueue(&q, 3);
	enqueue(&q, 3);
	display_queue(&q); 
}


