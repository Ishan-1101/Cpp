#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define inf 1e18
#define mid(l, r) (l + (r - l) / 2)
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> ump;
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

int32_t main()
{

    string s = "";
    string s1 = "abcdefghijklmnopqrstuvwxyz";
    int len = 0;
    w(t)
    {

        s = "";
        len = 0;
        cin >> len;
        int i = 0;
        while (len--)
        {
            s += s1[i];
            if (i == 25)
                i = 0;
            i++;
        }
        cout << s << endl;
    }
    return 0;
}