#include <bits/stdc++.h>
using namespace std;

int T, n, b, i = 0;

int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

    cin >> T;

    while (T--)
    {
        i++;
        int houses = 0;
        cin >> n >> b;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= b)
            {
                houses++;
                b -= arr[i];
            }
        }

        printf("Case #%d: %d\n", i, houses);
    }
}