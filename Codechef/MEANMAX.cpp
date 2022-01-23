#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
typedef vector<int> vi;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(cont) cont.begin(), cont.end()
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    f(n) cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    int a = *arr.begin();
    int sm = accumulate(all(arr), 0LL);
    double ans = double(sm - a) / (n - 1);
    ans += a;
    cout << setprecision(12) << fixed;
    cout << ans << endl;
}
int32_t main()
{
    w(t)
    {
        solve();
    }

    return 0;
}