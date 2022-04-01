/*
Count number of subsets with a given difference
 Array[]={1,1,2,3} and Diff=1
 output should be 3
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
static int dp[101][1001]; 
int countSubsetSum(int n, int sum,vector<int>arr)
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
   int n,diff;
   cout<<"Enter size of array and the difference:\n";
   cin>>n>>diff;
   vector<int> arr(n);
   cout<<"Enter elements of the array:\n";
   for(int i=0; i<n; i++)
   cin>>arr[i];
   int sumOfArr=accumulate(arr.begin(),arr.end(),0);
   int sum1=(diff+sumOfArr)/2;
   dp[n+1][sum1+1];
   for (int i = 0; i < n; i++)
        for (int j = 0; j < sum1; j++)
        {
             if (i == 0)
                dp[i][j] = 0;
             if (j == 0)
                dp[i][j] = 1;
        }
        dp[0][0]=1;
   cout<<"Output:"<<countSubsetSum(n,sum1,arr);
   return 0;
}