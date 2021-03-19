// https://leetcode.com/problems/sort-the-matrix-diagonally/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

#define flag printf("\n--------FLAG--------\n");
using namespace std;

void printMatrix(vector<vector<int>> A)
{
    for (vector<int> i : A)
    {
        for (int j : i)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
        3 1 
        1 1

        start from bottom left
        go to top right -> recursive base case
*/

void diagonalSort(vector<vector<int>> A, int i, int j)
{
    // Dont access illegal
    assert((i >= 0 && i < A.size()) && (j < A[0].size() && j >= 0));

    // Sort and and store in A
    vector<int> temp;
    for (int m = i, n = j; m < A.size(), n < A[0].size(); m++, n++)
    {
        printf("%d\n", A[m][n]);
        temp.push_back(A[m][n]);
    }

    flag;

    sort(temp.begin(), temp.end());

    for (int m = i, n = j, k = 0; m < A.size(), n < A[0].size(), k < temp.size(); m++, n++, k++)
    {
        A[m][n] = temp[k];
    }

    if (i > j)
        // lower part
        diagonalSort(A, i - 1, j);

    if (i == j)
        // start of primary diagonal reached
        diagonalSort(A, i, j + 1);

    if (i == 0 && j == A[0].size() - 1)
        return;
}

int main()
{
    // 2x2
    vector<vector<int>> A = {{3, 1},
                             {1, 1}},
                        B = {{1}},
                        C = {{1, 1}};

    diagonalSort(A, A.size() - 1, 0);
    // diagonalSort(B, B.size() - 1, 0);
    // diagonalSort(C, C.size() - 1, 0);

    printMatrix(A);
}