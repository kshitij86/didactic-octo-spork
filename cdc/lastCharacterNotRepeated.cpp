#include <bits/stdc++.h>
using namespace std; 

char lastCharacterNotRepeated(string s){ 
	vector<char> characterStack;
	unordered_set<char> hashStore; 

	for(char i: s){
		if(!hashStore.count(i)){
			hashStore.insert(i);
			characterStack.push_back(i);
		} else {
			for(int j=0; j<characterStack.size(); j++){
				if(characterStack[j] == i){
					characterStack.erase(characterStack.begin() + j);
					break;
				}
			}
		}
	}
	return characterStack[characterStack.size()-1]; 
}

string randomStringGenerator(int len){
	string randString = ""; 
	srand(time(0));

	for(int i=0; i<len; i++){
		char randomChar = (char)rand() % 66; 
		randString += randomChar; 
	}

	return randString;
}

void test(int timesToTest){
	while(timesToTest--){
		string temp = randomStringGenerator(rand() % 1000); 
		cout << temp << endl; 
		cout << lastCharacterNotRepeated(temp) << endl;
	}
}

int main(){
	test(rand() % 1000);
}