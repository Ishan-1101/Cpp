#include <bits/stdc++.h>
using namespace std;

map<string, int> mp1, mp2;
string part[1000];
int poi[1000], n;

int i, m = 0;

int main()
{
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        cin >> part[i] >> poi[i];
        mp1[part[i]] += poi[i];
    }

    for (i = 0; i < n; ++i)
    {
        if (m < mp1[part[i]])
        {
            m = mp1[part[i]];
        }
    }

    for (i = 0; mp1[part[i]] < m || (mp2[part[i]] += poi[i]) < m; ++i);
    cout << part[i];
    return 0;
}