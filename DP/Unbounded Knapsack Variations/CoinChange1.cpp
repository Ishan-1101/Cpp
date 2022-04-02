/*
MAX NO. OF WAYS
I/P= coin[]={1,2,3} and sum=5
O/P= 5 ways
2+3
1+1+3
1+2+2
1+1+1+1+1
1+1+1+2
since each coin can be chosen multiple times(infinite supply of coins) ----> unbounded (wt[]->coin[] and W->sum)
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
static int dp[101][1001];

int solve(int n, int sum, vector<int> coin)
{
    // base case
    if (n == 0)
        return 0;
    if (sum == 0)
        return 1;
    // choice diagram
    if (coin[n - 1] <= sum)
        return solve(n, sum - coin[n - 1], coin) + solve(n - 1, sum, coin);
    else if (coin[n - 1] > sum)
        return solve(n - 1, sum, coin);
}

int main()
{
    cout << "\nEnter number of coins and the sum required\n";
    int n, sum;
    cin >> n >> sum;
    vector<int> coin(n);
    dp[n + 1][sum + 1];
    cout << "Enter value of each coin\n";
    for (int i = 0; i < n; i++)
        cin >> coin[i];
    cout << solve(n, sum, coin) << endl;
    return 0;
}