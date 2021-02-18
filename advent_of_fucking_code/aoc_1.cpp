#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    const int x = 2020;
    fstream fin;
    int arr[1000000], i = 0, f = 0, s = 0;
    map<int, int> diff;
    fin.open("aoc_1_input.txt");

    while (fin)
    {
        fin >> arr[i++];
    }

    int j = 0;
    for (; j < i + 1; j++)
    {
        if (diff.count(arr[j]) > 0)
        {
            break;
        }
        else
        {
            diff[2020 - arr[j]] = j;
        }
    }
    cout << arr[diff[arr[j]]] * arr[j];
}