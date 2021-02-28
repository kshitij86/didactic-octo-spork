#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    long S, D, I, V, F;
    map<string, vector<int>> streets;
    vector<vector<string>> cars;

    fstream fi;

    fi.open("q.txt");
    while (fi)
    {
        int x;
        string c;
        vector<string> g;
        vector<int> t(3);

        fi >> D >> I >> S >> V >> F;

        // for ith street
        for (int i = 0; i < S; i++)
        {
            fi >> t[0] >> t[1] >> c >> t[2];

            streets[c] = t;
            t.clear();
        }

        // for ith car
        for (int i = 0; i < V; i++)
        {

            fi >> x;

            for (int j = 0; j < x; j++)
            {
                fi >> c;
                g.push_back(c);
            }
            cars.push_back(g);
        }
    }

    cout << "All done";
}