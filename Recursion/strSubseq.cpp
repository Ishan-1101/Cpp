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

void PowerSet(string s,int i,string curr){
    if(i==s.length()){
        cout<<curr<<endl;
        return;
    }
    PowerSet(s,i+1,curr+s[i]);
    PowerSet(s,i+1,curr);

}
 
int32_t main()
{
   string s;
   cin>>s;
   PowerSet(s,0,"");
 
    return 0;
}