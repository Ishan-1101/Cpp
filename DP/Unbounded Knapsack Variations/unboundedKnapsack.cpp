/*
Multiple occurances of the same item:
given W, n, value[] and wt[]
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int knapsackRecursion(int n,int W,vector<int>val,vector<int>wt){
    //base condition 
    if(n==0 || W==0) return 0;
    //choice diagram
    if(wt[n-1]<=W)
    return max(val[n-1]+knapsackRecursion(n,W-wt[n-1],val,wt),knapsackRecursion(n-1,W,val,wt));
    else if(wt[n-1]>W)
    return knapsackRecursion(n-1,W,val,wt);
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
    cout<<"Max profit : "<<knapsackRecursion(n,W,val,wt)<<endl;
    return 0;
}
