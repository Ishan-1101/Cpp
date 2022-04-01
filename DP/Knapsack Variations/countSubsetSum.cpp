/*input = > arr[] = {2, 3, 5, 6, 8, 10} and sum = 10
output = > 3(ans){2, 8}, {2, 3, 5} and { 10 }*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
static int dp[101][1001];
int solve(int n, int sum,vector<int>arr)
{
    if(sum == 0 || (sum==0&&n==0)) return 1;
    if(n==0) return 0;

    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < sum + 1; j++)
        {
            if(arr[i-1]<= j)
            dp[i][j] =dp[i-1][j-arr[i-1]] + dp[i-1][j];
            else
            dp[i][j] =dp[i-1][j];
        }
    return dp[n][sum];
}
int main()
{
    cout << "\nEnter size of array and the sum required:\n";
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    dp[n + 1][sum + 1];
    cout<<"\nEnter elements of array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < sum; j++)
        {
             if (i == 0)
                dp[i][j] = 0;
             if (j == 0)
                dp[i][j] = 1;
        }
        dp[0][0]=1;

        cout<<(solve(n, sum,arr));
    
    return 0;
}