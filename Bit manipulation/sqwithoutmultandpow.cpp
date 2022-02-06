// Calculate square of a number without using *, / and pow()
#include <bits/stdc++.h>
using namespace std;

int square(int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
        n = -n;
    int x = n >> 1; // floor(n/2) using right shift
    // If n is odd
    if (n & 1)
        return ((square(x) << 2) + (x << 2) + 1);
    else // If n is even
        return (square(x) << 2);
}

int main()
{
    int n;
    cin >> n;
    cout << square(n) << endl;
    return 0;
}
