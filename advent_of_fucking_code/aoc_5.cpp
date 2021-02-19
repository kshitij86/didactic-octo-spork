#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

int main()
{
    char arr[323][434];
    fstream fin;

    fin.open("aoc_3_input.txt");

    while (fin)
    {
        for (int i = 0; i < 323; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                fin >> arr[i][j];
            }
        }
    }

    for (int j = 31; j < 434; j += 31)
    {
        for (int i = 0; i < 323; i++)
        {
            for (int k = j; k < 31; k++)
            {
                fin >> arr[i][k];
            }
        }
    }

    // see the grid
    for (int i = 0; i < 323; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            cout << arr[i][j];
        }
    }
}