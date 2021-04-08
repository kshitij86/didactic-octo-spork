#include <bits/stdc++.h>
using namespace std;

/*
	Given a 5x6 snakes and ladders board, find the minimum number of dice throws required to reach the destination or last cell (30th cell) from the source (1st cell). You are given N ie - the total number of snakes and ladders and an array arr of 2*N size where 2*i and (2*i+1)th values denotes the starting and ending point respecitvely of ith snake or ladder. The board looks like the following.
                                   

Example 1:

Input:
N = 8
arr = {3, 22, 5, 8, 11, 26, 20, 29, 
       17, 4, 19, 7, 27, 1, 21, 9}
Output:
3
Explaination:
The given board is the board shown
in the figure. For the above board 
output will be 3. For 1st throw get a 2. For 
2nd throw get a 6. For 3rd throw get a 2.


Your Task:
You do not need to read input or print anything. Your task is to complete the function minThrow() which takes N and arr as input parameters and returns the minimum number of throws required to reach the end of the game.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
*/

/*
	Probable DP problem, find the shortest path to the last row, preferably even the last cell and connect to cell '1'
	E.g. 
	1. If ladder(3, 22) => we are 8 cells away from goal, so starting at '1' roll a '2' and go to three, and we are at '22' due to ladder
 	2. Now, if there are no snakes in [23,30] we can get to '30' in 8%6 = 2 throws
	3. MIN THROWS = 3
	
	TODO: Account for snakes

*/



int minThrows(int N, int *arr){	


}

int main(int argc, char const *argv[])
{	
	int N = 8;
	int *arr = {3, 22, 5, 8, 11, 26, 20, 29, 17, 4, 19, 7, 27, 1, 21, 9};
		
	return 0;
	}
}
