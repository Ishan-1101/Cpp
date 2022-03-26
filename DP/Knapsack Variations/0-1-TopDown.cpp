#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
// n<=100 W<=1000
int static dp[102][1002];

int solve(int wt[], int val[], int W, int n)
{
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < W + 1; j++)
        {

            if (wt[i - 1] <= j)
                dp[i][j] = max(val[i - 1] + dp[j - wt[i - 1]][i - 1], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    
    return dp[n][W];
}

int main()
{
    int n, W;
    cin >> n >> W;
    int wt[n], val[n];
    for (int i = 0; i < n; i++)
        cin >> val[i] >> wt[i];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    cout << solve(wt, val, W, n) << endl;
}