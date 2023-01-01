#include<bits/stdc++.h>
using namespace std;

#define w(x)  int x; cin>>x; while(x--)
 
void solve() {
   string s = "";
   cin >> s;
   string samecase = "";
   for(char ch : s) {
    char c = tolower(ch);
    samecase += c;
   }
   if(samecase == "yes") cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
 
int32_t main() {
   w(t)
   solve();
   return 0;
}