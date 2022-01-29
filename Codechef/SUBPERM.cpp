#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define inf 1e18
#define mid(l, r) (l + (r - l) / 2)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

void solve()
{

    int n, k;
    cin >> n >> k;
    if (n == 1 && k == 1)
        cout << 1 << endl;
    else
    {
        if (k < 2 || k > n)
            cout << -1 << endl;
        else
        {
            int c = 0;
            for (int i = 0; i < k - 1; i++)
            {
                cout << (i + 1) << " ";
                c = i;
            }
            for (int i = 0; i < n - c - 1; i++)
            {
                cout << (n - i) << " ";
            }
            cout << endl;
        }
    }
}
int32_t main()
{
    w(t)
    {
        solve();
    }

    return 0;
}