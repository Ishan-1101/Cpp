#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cout << "Enter a number :" << endl;
    cin >> x;
    double eps = 1e-6;
    double lo, hi;
    lo = 0;
    hi = x;
    while (hi - lo > eps)
    {
        double mid = (lo + hi) / 2;
        if (mid * mid < x)
            lo = mid;
        else
        {
            hi = mid;
        }
    }
    cout<<"SQRT = "<<lo<<endl;
    return 0;
}