#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

using namespace std;

int main()
{
    ll t, n, e, c, po, pm, pk;
    cin >> t;

    while (t--)
    {
        cin >> n >> e >> c >> po >> pm >> pk;
        vector<ll> s;
        vector<ll> kv;

        for (int i = 0; i <= n + 1; i++)
        {
            kv.push_back(i);
        }

        for (ll m = 0; m <= n; m++)
        {
            ll idx1 = lower_bound(kv.begin(), kv.end(), (2 * n - e - 2 * m)) - kv.begin();
            ll idx2 = upper_bound(kv.begin(), kv.end(), (c - 3 * m)) - kv.begin() - 1;

            if (idx2 < idx1 || idx1 == n + 1)
                continue;
            if (idx2 == n + 1 && idx2 + 3 * m > c)
                continue;

            ll k;
            if (pk > po)
                k = idx1 < (n - m) ? idx1 : (n - m);
            else
                k = idx2 < (n - m) ? idx2 : (n - m);

            ll o = n - k - m;
            if (k + 2 * m >= 2 * m - e && k + 3 * m <= c)
            {
                s.push_back(po * o + pm * m + pk * k);
            }
        }

        if (s.size() == 0)
            cout << -1 << endl;
        else
        {
            cout << *min_element(s.begin(), s.end()) << endl;
        }
    }
}
