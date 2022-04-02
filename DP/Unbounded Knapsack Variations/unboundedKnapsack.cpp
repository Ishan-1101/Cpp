/*
Multiple occurances of the same item:
given W, n, value[] and wt[]
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
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
int main()
{
    int W,n;printf("Enter the number of items and the capacity of the knapsack:\n");
    scanf("%d%d",&n,&W);
    vector<int>wt(n);
    vector<int>val(n);
    for(int i=0; i < n; i++){
        cout<<"Enter weight and value of item #"<<i+1<<endl;
        cin>>wt[i]>>val[i];
    }
    dp[n+1][W+1];
    memset(dp, -1, sizeof(dp));
    cout<<"Max profit : "<<knapsackMemoize(n,W,val,wt)<<endl;
    return 0;
}
