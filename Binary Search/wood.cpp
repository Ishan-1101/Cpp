#include <bits/stdc++.h>
using namespace std;
const int N = 1e6; //max no of trees used for array size
int n;             //no of trees
long long m;       //required wood;
long long trees[N];

bool SufficientWood(int h)
{
    long long wood=0;
    for(int i=0;i<n;i++)
    {
        if(trees[i]>=h)
        wood=wood+(trees[i]-h);
    }
    // if(wood>=m)
    // return true;
    return wood>=m;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }
    long long lo = 0, hi = 1e9, mid;
    while(hi-lo>1)
    {
         mid=(hi+lo)/2;
         if(SufficientWood(mid)){
             lo=mid;
         }else{
             hi=mid-1;
         }
    }
    if(SufficientWood(hi))
    {
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
    return 0;
}