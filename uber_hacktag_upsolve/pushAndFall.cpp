#include <bits/stdc++.h>
using namespace std;

/*
.....#....*
..#..#...*. -> ........##*.
*/

vector<vector<char>> board = {{'.','.', '#','.'}, {'#', '.', '*', '.'}, {'.', '.', '.', '.'}};

void printBoard(){
    for(vector<char> i: board){
        for(char j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void pushAndFall(vector<vector<char>> board){
}

int main(){
	int r = board.size(), c = board[0].size(); 

	printBoard();

    // first push every box right
    for(int i=0; i<r; i++){
        for(int j=c-1; j>=0; j--){
            if(board[i][j] == '#'){
				int n = j+1;
                while((n<c) && (board[i][n] != '*') && (board[i][n] != '#'))
                    n++;

                board[i][n-1] = '#';
                board[i][j] = '.';
            }
        }
    }

	// then every box is falls down	
    for(int i=r-1; i>=0; i--){
        for(int j=0; j<c; j++){
            if(board[i][j] == '#'){
				int m = i+1;
                while((m<r) && (board[m][j] != '*') && (board[m][j] != '#'))
                    m++;

                board[m-1][j] = '#';
                board[i][j] = '.';
            }
        }
    }

    printBoard();
}

