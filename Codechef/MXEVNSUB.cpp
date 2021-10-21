#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
#define long long  ll
typedef pair<int, int> pii;
typedef vector<int> vi;
void solve(int n)
{
    ll a;
    int ans, odd, even;
    if (n % 2 != 0)
    {
        even = n / 2;
        odd = n / 2 + 1;
        if (odd % 2 == 0)
            odd = odd;
        else
        {
            odd -= 1;
        }
        ans = even + odd;
    }
    else
    {
        even = n / 2;
        odd = even;
        ans = even + odd;
    }
    cout << ans << endl;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
