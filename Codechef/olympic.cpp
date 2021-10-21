#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
typedef pair<int, int> pii;
typedef vector<int> vi;
int G1, S1, B1, G2, S2, B2;
void solve()
{
    if(G1+S1+B1>G2+S2+B2)
    cout<<"1"<<endl;
    else{
        cout<<"2"<<endl;
    }
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {

        cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;
        solve();
    }

    return 0;
}
