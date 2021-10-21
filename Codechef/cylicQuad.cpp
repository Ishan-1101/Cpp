#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
typedef pair<int, int> pii;
typedef vector<int> vi;
bool solve(int a, int b, int c, int d)
{
    if (a + c == 180 && b + d == 180)
        return true;
    else
    {
        return false;
    }
}

int main()
{

    int t = 1;
    cin >> t;
    int A, B, C, D;
    while (t--)
    {
        si(A);
        si(B);
        si(C);
        si(D);
        if (solve(A, B, C, D))
        {
            ps("YES");
        }
        else
        {
            ps("NO");
        }
    }

    return 0;
}
