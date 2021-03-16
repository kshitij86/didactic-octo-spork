#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    How many ways to reach a particular stair if only one or two steps can be taken?

    Classic DP problem, lets look at example.

    Consider staircase with 5 steps:        
          _|
        _|
      _|
    _|
  _|  

    Ways of reaching,

        1st step = 1 (already at 1st step)
        2nd step = 1 (take a step of size 1)
        3rd step = 2 (take two steps of size 1 or one step of size 2)
        4th step = 3 (three steps of size one, two of size one and one of two or vice versa)
        and so on

    If we observe closely, it forms Fibonacci pattern.
    So, problem is memoized Fibonacci.  
*/

int dp[100000001] = {0};
int climb(int n)
{

    // memoized Fibonacci
    if (dp[n])
        return dp[n];

    return dp[n] = climb(n - 1) + climb(n - 2);
}

int main()
{
    dp[0] = dp[1] = 1;

    int stairToReach = 44;
    printf("%d\n", climb(stairToReach));
}