#include <bits/stdc++.h>
using namespace std;
long long E, K;
void solve()
{
    long long level=0;
    while(E>0){
        E=floor(E/K);
        level++;
    }
    cout<<level<<endl;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> E >> K;
        solve();
    }

    return 0;
}
