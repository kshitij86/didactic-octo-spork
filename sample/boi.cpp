#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int> st;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            st.insert(arr[i] + arr[j]);
        }
    }

    cout << st.size() << endl;
    return 0;
}
