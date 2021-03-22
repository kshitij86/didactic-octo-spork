#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

#define flag(i) printf("\n------FLAG %d------\n", i);
using namespace std;

int main()
{
    int T, n;

    cin >> T;
    while (T--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int sub = 0;
        if ((a[0] - a[1] != -1))
        {
            sub = a[0];
        }
        else if ((a[n - 2] - a[n - 1] != -1))
        {
            sub = a[n - 1];
        }
        for (int i = 1; i < n - 1; i++)
        {
            // cout << a[i] << " " << a[i + 1];

            int ld = (a[i - 1] - a[i] == -1);
            int rd = (a[i] - a[i + 1] == -1);

            if (!ld)
            {
                if (a[i - 1] - a[i - 2] == 1)
                    sub = a[i];
                else
                    sub = a[i - 1];
                break;
            }
            else if (!rd)
            {
                if (a[i + 1] - a[i + 2] == -1)
                    sub = a[i];
                else
                    sub = a[i + 1];
                break;
            }
        }

        printf("%d\n", sub);
    }
    return 0;
}
