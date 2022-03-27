#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int static dp[101][1001];

bool solve(int n, int sum,vector<int>arr)
{
    if(sum == 0 || (sum==0&&n==0)) return true;
    if(n==0) return false;

    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < sum + 1; j++)
        {
            if(arr[i-1]<= j)
            dp[i][j] =dp[i-1][j-arr[i-1]] or dp[i-1][j];
            else
            dp[i][j] =dp[i-1][j];
        }
    return dp[n][sum];
}
int main()
{
    cout << "\nEnter size of array and the sum required\n";
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    dp[n + 1][sum + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < sum; j++)
        {
            if (i == 0)
                dp[i][j] = false;
            if (j == 0)
                dp[i][j] = true;
        }
    if (solve(n, sum,arr))
        cout << "Possible\n";
    else
        cout << "Not Possible\n";
    return 0;
}