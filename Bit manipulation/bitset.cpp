#include<bits/stdc++.h>
using namespace std;
#define w(x)  int x; cin>>x; while(x--)
 
void solve() 
{
    cout<<"Enter a number \n";
   int x;cin>>x;
   cout<<"Number : "<<x<<endl;
   cout<<"Binary representation of the number : "<< bitset<8>(x)<<endl;
   cout<<"Number of set bits in the number : "<<bitset<32>(x).count() <<endl;
}
 
int32_t main()
{
   w(t)
   solve();
   return 0;
}