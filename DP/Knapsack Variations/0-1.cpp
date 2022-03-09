#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
// n<=100 W<=1000
int static dp[102][1002];

int solve(int wt[], int val[], int W, int n)
{
    // base condition
    if(W==0||n==0) return 0;
    //memoize
    if(dp[n][W]!=-1) return dp[n][W];
    // choice diagram
    if(wt[n-1]<=W)
    return dp[n][W]=max(val[n-1]+solve(wt,val,W-wt[n-1],n-1),solve(wt,val,W,n-1));
    else if(wt[n-1]>W)
    return dp[n][W]=solve(wt,val,W,n-1);
}

int main()
{
    int n, W;
    memset(dp,-1, sizeof(dp));
    cin >> n >> W;
    int wt[n], val[n];
    for (int i = 0; i < n; i++)
        cin >> val[i] >> wt[i];
    cout << solve(wt, val, W, n) << endl;
}