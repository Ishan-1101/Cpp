#include <bits/stdc++.h>
using namespace std;
#define w(x) \
   int x;    \
   cin >> x; \
   while (x--)

void solve()
{
   int n;cin>>n;
   int x=(n&1);
   if(x==0)
   cout<<"Even"<<endl;
   else
   cout<<"Odd"<<endl;
}

int32_t main()
{
   w(t)
       solve();
   return 0;
}