#include <bits/stdc++.h>
using namespace std;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

void solve()
{
    int num, n;
    cout << "Enter number\n";
    cin >> num;
    cout << "Enter bit number you wish to obtain\n";
    cin >> n;
    cout << "Answer:" << (1 & (num >> (n - 1)))<<endl;
}
int32_t main()
{
    w(t)
        solve();
    return 0;
}