#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map<string, int> msi;

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, i;
        si(n);
        msi mp;
        int div = 3;
        while (div--)
        {
            fo(i, n)
            {
                string prob_code;
                int no_sub;
                ss(prob_code);
                si(no_sub);
                mp[prob_code] = mp[prob_code] + no_sub;
            }
        }
        vi ans;
        for (auto x : mp)
            
        sort(ans.begin(), ans.end());
        for (auto x : ans)
            cout << x << " " << endl;
    }

    return 0;
}
