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
#define w(x)  int x; cin>>x; while(x--)

void solve(){
int N,M;cin>>N>>M;
vi a(N);
vi b(M);
vi c(N+M);
f(N) cin>>a[i];
f(M) cin>>b[i];
c[0]=a[0];
for(int i=1; i <N+M; i++){
    if(a[i]<=b[i-1]){
        c.pb(a[i]);
    }else{
        c.pb(b[i-1]);
    }
}
for(auto i:c)cout<<i<<" ";
}
 
int32_t main()
{
   w(t)
   {
       solve();
   }
 
    return 0;
}