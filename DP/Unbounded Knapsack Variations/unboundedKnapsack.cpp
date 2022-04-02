/*
Multiple occurances of the same item:
given W, n, value[] and wt[]
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
static int dp[101][1001];
/*
int knapsackRecursion(int n,int W,vector<int>val,vector<int>wt){
    //base condition
    if(n==0 || W==0) return 0;
    //choice diagram
    if(wt[n-1]<=W)
    return max(val[n-1]+knapsackRecursion(n,W-wt[n-1],val,wt),knapsackRecursion(n-1,W,val,wt));
    else if(wt[n-1]>W)
    return knapsackRecursion(n-1,W,val,wt);
}
*/
/*
int knapsackMemoize(int n,int W,vector<int>val,vector<int>wt){
    //base condition
    if(n==0 || W==0) return 0;
    //memoize
    if(dp[n][W]!=-1) return dp[n][W];
    //choice diagram
    if(wt[n-1]<=W)
    return dp[n][W]=max(val[n-1]+knapsackMemoize(n,W-wt[n-1],val,wt),knapsackMemoize(n-1,W,val,wt));
    else if(wt[n-1]>W)
    return dp[n][W]=knapsackMemoize(n-1,W,val,wt);
}
*/
int knapsackTopDown(int n, int W, vector<int> val, vector<int> wt)
{
    // base condition
    if (n == 0 || W == 0)
        return 0;
    // choice diagram
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < W + 1; j++)
        {
            if (wt[n - 1] <= W)
                dp[i][j] = max(val[i] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    return dp[n][W];
}
int main()
{
    int W, n;
    printf("Enter the number of items and the capacity of the knapsack:\n");
    scanf("%d%d", &n, &W);
    vector<int> wt(n);
    vector<int> val(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter weight and value of item #" << i + 1 << endl;
        cin >> wt[i] >> val[i];
    }
    dp[n + 1][W + 1];
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < W + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    cout << "Max profit : " << knapsackTopDown(n, W, val, wt) << endl;
    return 0;
}
