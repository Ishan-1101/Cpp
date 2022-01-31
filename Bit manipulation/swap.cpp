#include<bits/stdc++.h>
using namespace std;
#define w(x)  int x; cin>>x; while(x--)
 
void solve() 
{
   int a,b;cout<<"\nEnter two numbers :";cin>>a>>b;
   cout<<"Original values: "<<a<<" "<<b<<endl;
   cout<<"Swapped values: ";
   a=a^b;
   b=a^b;
   a=a^b;
   cout<<a<<" "<<b;
}
 
int32_t main()
{
   w(t)
   solve();
   return 0;
}