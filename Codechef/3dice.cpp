#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        double ans;
        ans = 6.0 - (x + y);
        if(ans>0)
        {
            ans = ans / 6;
            ans = floor(1000000 * ans) / 1000000;
            cout << fixed << setprecision(6) << ans << endl;
        }else{
             cout << "0" << endl;
        }
    }

    return 0;
}
