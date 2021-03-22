#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, n, T;

    cin >> T;
    while (T--)
    {
        cin >> a >> b >> n;
        int tc = 0;
        if (n % 2 == 0)
        { // all ops n/2 times
            tc += (a * (n / 2));
            tc -= (b * (n / 2));
        }
        else
        {
            int h = n / 2;
            tc += (a * (h + 1));
            tc -= (b * h);
        }
        printf("%d\n", tc);
    }
    return 0;
}
