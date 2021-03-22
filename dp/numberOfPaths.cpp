// Number of paths from top left of grid to bottom right

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

/*
    Given an mxn grid, find the number of ways to reach the end of the grid
    _
   |_|

    We can use dynamic programming to calculate the number of paths to reach mat[i][j]
    Base cases:
    if i == 0 and j == 0: ways = 1, already here (0 would mean no ways, bit there is a way)
    if i == m-1 and j == n-1, return 1

*/

int m, n;
int dp[1002][1002];

int numberOfPaths(int i, int j)
{
    if (i == m - 1 && j == n - 1)
        return 1;

    if (i == m - 1)
    {
        if (!dp[i][j])
            return dp[i][j] = 1 + numberOfPaths(i, j + 1);
        else
            return dp[i][j];
    }

    if (j == n - 1)
    {
        if (!dp[i][j])
            return dp[i][j] = 1 + numberOfPaths(i + 1, j);
        else
            return dp[i][j];
    }

    if (!dp[i][j])
    {
        return dp[i][j] = 1 + numberOfPaths(i + 1, j + 1);
    }
    return dp[i][j];
}

int main()
{
    m = 2, n = 8;
    memset(dp, 0, sizeof(dp));
    printf("%d\n", numberOfPaths(0, 0));
}