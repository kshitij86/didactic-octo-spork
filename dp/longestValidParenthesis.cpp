// Find the length of the longest valid parenthesis sequence

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

/*
    DP can be used to keep track of the longest parenthesis upto this point
    If x = ((()), answer = 2

    Algo: 
    1. Keep track of open brackets seen till now
    2. If a close bracket is encountered, decrement open and update dp[i] = dp[i-1] + 1
    3. Return dp[n-1]

*/

int longestValidparenthesis(string x)
{
    int dp[x.length()], open = 0;
    memset(dp, 0, sizeof(dp));

    int k = 0;
    for (char i : x)
    {
        if (i == '(')
        {
            open++;
            dp[k] = dp[k - 1];
        }
        else
        {
            if (open)
            {
                open--;
                dp[k] = dp[k - 1] + 2;
            }
            else
            {
                dp[k] = dp[k - 1];
            }
        }
        k++;
    }

    return dp[x.length() - 1];
}

int main()
{

    printf("%d\n", longestValidparenthesis("))()(()"));
    printf("%d\n", longestValidparenthesis("(()"));
    printf("%d\n", longestValidparenthesis("(())))))))))))))))))))))))"));
    printf("%d\n", longestValidparenthesis(")()())"));
}