//https://leetcode.com/problems/house-robber/

#include <iostream>
#define max(a, b) (a > b ? a : b);
using namespace std;

/*
    arr = [5 4 4 5 3 1]
    dp = [] // contains the max profit decisions

    // For arr[0], i-1 and i-2 do not exist and for arr[1], i-2 does not exist.
    dp[0] = arr[0]
    dp[1] = max(arr[1], dp[0]), here arr[1] means we did not rob arr[0] and dp[0] means we skip this house.

*/

int smartRobber(int n, int arr[])
{
    // No house to rob
    if (n == 0)
        return 0;

    // Only one house which is adjacent to none
    if (n == 1)
        return arr[0];

    // Two houses, both adjacent, must rob the one which gives maximum profit
    if (n == 2)
        return max(arr[0], arr[1]);

    // All other cases
    int dp[n] = {0};
    dp[0] = arr[0];
    dp[1] = max(arr[1], dp[0]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
    }
    return dp[n - 1];
}

int main()
{
    int arr[6] = {5, 4, 4, 5, 3, 1};

    printf("%d\n", smartRobber((sizeof(arr) / sizeof(int)), arr));
}