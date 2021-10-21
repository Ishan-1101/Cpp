#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define ll long long 
typedef vector<int> vi;
string l,r;
int SOD(string str){
    int sum = 0;
     for (int i = 0; i < str.length(); i++) {
        sum = sum + str[i] - 48;
    }
    return sum;
}
void solve()
{   
    int ans=0;
    for(int start=stoi(l);start<=stoi(r);start++)
    {
        if(SOD(to_string(start))%3==0)
        ans++;
    }
    cout<<ans<<endl;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> l>>r;
        solve();
    }

    return 0;
}
