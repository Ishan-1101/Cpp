#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
//TOP DOWN APPROACH
int dp[N];
int fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];   //memoize
    return dp[n]=fibo(n - 1) + fibo(n - 2);
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fibo(n);
}
