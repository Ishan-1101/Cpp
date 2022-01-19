#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define inf             1e18
#define mid(l,r)        (l+(r-l)/2)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;
//#define w(x)  int x; cin>>x; while(x--)
 
int fiboRec(int n)
{
    if(n==1)
    return 0;
    if(n==1)
    return 1;
    int ans=fiboRec(n-1)+fiboRec(n-2);
    return ans;
   
}

int32_t main()
{
   int n;cin>>n;
   int res=fiboRec(n);
     cout<<res<<" "<<endl;
    return 0;
}