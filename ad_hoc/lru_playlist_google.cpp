// Implememts this -> https://leetcode.com/discuss/interview-question/1028359/google-create-a-least-recently-used-random-shuffle-playlist

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

class Playlist{
	public: 
	vector<char> playlist;
	map<char,int> hasher;
	int n;
 
	Playlist(){}
	Playlist(vector<char> &playlist){
		this->playlist = playlist;
		hasher.clear();
		// Store initial positions of songs
		int i = 0;
		for(char l: playlist){
			hasher[l] = i;
			i++; 
		}
		n = this->playlist.size();
	}
	int playSong(int);
	int selectSong(char);
};

int Playlist::playSong(int k){
	// Remove song at kth position and append to end
	if(k >= n){
		return -1;
	} else if(k == n-1) return 0;	

	char songAtk = playlist[k];
	playlist.erase(playlist.begin()+k);
	playlist.push_back(songAtk);
	hasher[songAtk] = n-1;

	return 0;
}

int Playlist::selectSong(char song){
	// Return postion of song in queue
	return hasher[song];
}

int main(){	
	vector<char> songs = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	Playlist p(songs);
	printf("%d\n", p.playSong(2));
}


