#include<bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define w(x)  int x; cin>>x; while(x--)
 
int32_t main()
{
    w(t)
    {
        int n;cin >> n;
        string s="";char curr='a';
        f(n){
            s+=curr;
            curr++;
            if(curr=='d')
            curr='a';
        }
        cout<<s<< endl;
    }
   
    return 0;
}