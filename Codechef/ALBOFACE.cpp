#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool pow(ll N)
{
    if (N != 0 && (N & (N - 1)) == 0)
        return true;
    else
        return false;
}
void solve()
{
    ll N;
    cin >> N;
    ll i = 2;
    if (N == 2)
    {
        cout << "Bob" << endl;
        return;
    }
    if (N == 1)
    {
        cout << "Alice" << endl;
        return;
    }
    if (N % 2 == 0)
    {
        if (pow(N + 2) == true)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
        return;
    }
    if (N % 2 != 0)
    {
        if (pow(N + 1) == true)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
        return;
    }
    return;
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
