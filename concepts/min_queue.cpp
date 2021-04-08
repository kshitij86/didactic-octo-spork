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

class MinQueueDestructive{
	public: 
	// Lossy queue that deletes elements to preserve minimum
	deque<int> mq;
	int min;
	
	int getSize();
	void printMin();
	void enqueueInMQD(int value);
	void dequeueInMQD();
};

int MinQueueDestructive::getSize(){
	return this->mq.size();	
}

void MinQueueDestructive::printMin(){
	printf("Minimum in queue: %d\n", this->mq.front());
}

void MinQueueDestructive::enqueueInMQD(int value){
	// Inserts elements so that minimum is found in O(1)
	while(!this->mq.empty() && value < this->mq.back())
		this->mq.pop_back();
	this->mq.push_back(value);
	printf("Inserted: %d\n", value);
}

void MinQueueDestructive::dequeueInMQD(){
	// Pops the front
	if(!this->mq.empty())
		this->mq.pop_front();
}

int main(){ 
	MinQueueDestructive mqd;
	
	mqd.enqueueInMQD(5);
	mqd.enqueueInMQD(4);
	mqd.enqueueInMQD(3);
	mqd.enqueueInMQD(2);
	mqd.enqueueInMQD(8);
	mqd.enqueueInMQD(9);
	mqd.enqueueInMQD(1);

	mqd.printMin();
	printf("Size of queue: %d\n", mqd.getSize());
}


