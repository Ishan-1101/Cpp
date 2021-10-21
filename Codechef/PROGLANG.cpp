#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
typedef pair<int, int> pii;
typedef vector<int> vi;
int a, b, a1, b1, a2, b2;

void solve()
{
    if ((a == a1 && b == b1) || (a == b1 && b == a1))
        cout << "1" << endl;
    else if ((a == a2 && b == b2) || (a == b2 && b == a2))
        cout << "2" << endl;
        else{
            cout<<"0"<<endl;
        }
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        solve();
    }

    return 0;
}
