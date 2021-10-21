#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll value;
int c1=0;
int c2=0;
void solve()
{
c2=(value/3);
c1=value-(2*c2);
if(c1-c2==2 || c2-c1==2)
{
    c1=c1-2;
    c2++;
}
cout<<c1<<" "<<c2<<endl;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> value;
        solve();
    }

    return 0;
}
