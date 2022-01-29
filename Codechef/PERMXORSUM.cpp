#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define f(n) for (int i = 0; i < n; i++)
#define inf 1e18
#define mid(l, r) (l + (r - l) / 2)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

void solve()
{
   ll i,j,n,m;
   cin>>n;
    vi v(n);
    iota(v.begin(),v.end(),1);
    set<ll,greater<ll>>s(v.begin(),v.end());
    ll ans=0;
    while(s.size()>1)
    {
        ll a=*s.begin();
        ll allbits=log2(a)+1;
        ll b=(1<<allbits)-1;
        if(a^b)
        {
            s.erase(a);
            s.erase(b^a);
            ans+=b*2;

        }else{
            s.erase(a);
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    w(t)
        solve();
    return 0;
}