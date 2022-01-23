#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define inf 1e18
#define mid(l, r) (l + (r - l) / 2)
typedef vector<int> vi;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
int sumofelements(vector<int> v)
{
    int sum = 0;
    f(v.size())sum+=v[i];
    return sum;
}
void solve(int n)
{
    vi a(n);
    f(n) cin >> a[i];
    cout<<sumofelements(a);
}
int32_t main()
{
    w(t)
    {
        int len;
        cin >> len;
        solve(len);
    }

    return 0;
}