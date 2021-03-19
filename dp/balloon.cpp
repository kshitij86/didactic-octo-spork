//https://www.geeksforgeeks.org/burst-balloon-to-maximize-coins/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define max(a, b) a > b ? a : b;

/*
    Goal is to maximize sum of (A[i]*A[i-1]*A[i+1])
    All balloons need to be bursted, no choice on that.

    1, [1,2,3], 1 -> Input
    [2,6,6] = 14 // if we assume only single balloons are burst

    Since all balloons need to be burst, only the order matters.
    It's best to keep maximum value balloons for last.

    Let [1,2,5] be input, if we start with 5, we get rid maximum value balloon too early




*/

int balloonsDP(vector<int> balloons)
{
    int n = balloons.size();
    int dp[n] = {0}; // the array is padded with ones for first and last item
    dp[0] = (1 * balloons[0] * balloons[1]);
    dp[n - 1] = (balloons[n - 2] * balloons[n - 1] * 1);
}

int main()
{
    vector<int> balloons = {1, 2, 3, 4, 5};
}