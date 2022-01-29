#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ld long double
#define w(x)  int x; cin>>x; while(x--)
 int n,k;
 string s;

int checker(int mid)
{
    int sum=0;
    for (int i = mid-1; i >=0; i--)
    {
        int z=(sum+long(s[i])-48)%10;
        if(z==0) continue;
        else{
            sum+=(10-z);
        }
    }
    if(sum<=k)
        return 1;
    return 0;
    
}
void solve()
{
    cin>>n>>k;
    cin>>s;
    int lo=0,hi=n,mid,ans=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(checker(mid))
        {
            lo=mid+1;
            ans=mid;
        }else{
            hi=mid-1;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
   w(t)
   {
       solve();
   }
 
    return 0;
}