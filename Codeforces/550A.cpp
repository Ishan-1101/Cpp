#include<bits/stdc++.h>
using namespace std;

#define w(x)  int x; cin>>x; while(x--)
 
void solve() 
{
   string s = "";
   cin >> s;
   int x1=s.find("AB");
   int x2=s.find("BA", x1+2); // OCCURENCE of BA FROM X1+2 POSITION
   int y1=s.find("BA");
   int y2=s.find("AB", y1+2);
   if((x1 != -1 and x2 != -1)  or (y1 != -1 and y2 != -1)){
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
}
 
int32_t main()
{
//    w(t)
   solve();
   return 0;
}