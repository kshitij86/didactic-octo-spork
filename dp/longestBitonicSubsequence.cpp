#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define max(a, b) (a > b ? a : b);

/*
    Longest Bitonic Subsequence:
    Sequence of integers that increases and then decreases

    Example in [1,2,3,4,1]

    1,2,3,1 and 1,2,3,4,1 are bitnoic


    It is an example of bidirectional DP:
    1. First we calculate increasing subsequence from left.
    2. Next we calculate increasing subsequence from right.
    3. Then, the length of the longest bitonic subsequence is left[i] + right[i] - 1.

    Example: 
    arr = [1,2,3,4,1]
    
    left[] = [1,2,3,4,1] -> Count integers strictly lesser than arr[i] to the left of it
    right[] = [1,2,2,2,1] -> Count integers strictly lesser than arr[i] to the right of it

    Note: 
        left[0] = 1, as nothing to the elements left of it
        right[n-1] = 1 as nothing to the right of it

    {1,2,3,4,5,6,7,8,9}

*/

void printArray(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int longestBitonic(int n, int *arr)
{
    int left[1001], right[1001];

    left[0] = 1;
    right[n - 1] = 1;

    // populate left with elements less than them
    for (int i = 1; i < n; i++)
    {
        int x = 1; // every element is part of its subsequence
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                // use already stored value to determine the largest subsequence if arr[j] < arr[i]
                x = max(x, left[j] + 1);
            }
        }
        left[i] = x;
    }

    // populate right with elements less than them
    for (int i = n - 2; i >= 0; i--)
    {
        int x = 1; // every element is part of its subsequence
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[i])
            {
                x = max(x, right[j] + 1);
            }
        }
        right[i] = x; // set max subsequence until now
    }

    printArray(n, left);
    printArray(n, right);

    int ans = -1;
    // find out maximum length subsequence
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, (left[i] + right[i] - 1));
    }

    return ans;
}

int main()
{
    int a1[] = {1, 2, 3, 4, 1};
    int a2[] = {1, 2, 3, 4, 5, 6, 7, 3, 3, 4, 2};
    int a3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d\n", longestBitonic(5, a1));
    // printf("%d\n", longestBitonic((sizeof(a2) / sizeof(int)), a2));
    // printf("%d\n", longestBitonic((sizeof(a3) / sizeof(int)), a3));
}