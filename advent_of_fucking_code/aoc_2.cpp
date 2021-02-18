#include <fstream>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    const int x = 2020;
    fstream fin;
    int arr[1000000], i = 0, j, k, m;

    fin.open("aoc_1_input.txt");

    while (fin)
    {
        fin >> arr[i++];
    }

    // outer loop whose selected number is input for inner loop
    for (j = 0; j < i - 1; j++)
    {
        for (k = j + 1; k < i; k++)
        {
            for (m = k + 1; m < i + 1; m++)
            {
                if ((arr[j] + arr[k] + arr[m]) == x)
                {
                    // cout << arr[j] << " " << arr[k] << " " << arr[m] << endl;
                    cout << arr[j] * arr[m] * arr[k];
                    exit(1);
                }
            }
        }
    }
}

/*
1010 + 1000 + 10 = 2020
*/