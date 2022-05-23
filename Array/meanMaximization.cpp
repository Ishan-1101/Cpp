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
    int n;
    cin >> n;
    int arr[n];
    f(n) cin >> arr[i];
    sort(arr, arr + n);
    int maxval = arr[n - 1];
    double sum = 0.0;
    f(n - 1)
    {
        sum += arr[i];
    }
    sum /= n - 1;
    double ans = sum + maxval;
    cout << ans << " ";
}
int32_t main()
{
    w(t)
    {
        solve();
    }

    return 0;
}