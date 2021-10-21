#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
using ll = long long;

int main()
{
  

    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        map<int, int> m;

        vector<int> v(n), ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]] = i;
        }

        set<int> s;

        for (int i = 0; i < n; i++)
        {
            if (s.size())
            {
                int ref = *s.rbegin();

                if (ref > v[i])
                {
                    ans[m[ref]] = i;
                    s.erase(ref);
                }
            }

            s.insert(v[i]);
        }

        int i = n;

        while (s.size())
        {
            int ref = *s.rbegin();
            ans[m[ref]] = i;
            s.erase(ref);
            i++;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << endl;
    }
}