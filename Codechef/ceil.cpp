#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
typedef long long int lli;

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        double a, b;
        lli ans;
        lli x;
        cin>>a>>b;
        
        if (a == b){
            ans = 0;
        }
        else if (a > b){
            x=a-1;
            ans = (ceil((b - x) / 2) + ceil((x - a) / 2));
        }
        else{
            x=a+1;
            ans = (ceil((b - x) / 2) + ceil((x - a) / 2));
        }
        cout << ans << endl;
    }

    return 0;
}
