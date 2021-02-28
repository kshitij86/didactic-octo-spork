#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int arr[1000002][1000002];

void solve(int n, vector<vector<string>> ing)
{
}

int main()
{
    memset(arr, 0, sizeof(arr));

    int n;
    fstream file_handler;
    int no_of_pizzas;
    vector<int> teams(3);
    vector<string> temp_x;
    vector<vector<string>> ing;

    file_handler.open("input.txt");

    // handle input
    while (file_handler)
    {
        file_handler >> no_of_pizzas >> teams[0] >> teams[1] >> teams[2];
        for (int i = 0; i < no_of_pizzas; i++)
        {
            file_handler >> n;
            for (int j = 0; j < n; j++)
            {
                string x;
                file_handler >> x;
                temp_x.push_back(x);
            }
            ing.push_back(temp_x);
            temp_x.clear();
        }
    }

    cout << ing.size() << endl;

    return 0;
}
