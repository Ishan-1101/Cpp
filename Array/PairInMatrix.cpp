#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define n 5
int solve(int a[][n])
{
    int i, j, c, d;
    int max = INT_MIN;
    int min = INT_MAX;
    f(n)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                c = i;
                d = j;
            }
        }
    }
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    return max - min;
}

int32_t main()
{
    int arr[n][n];
    int i, j;
    f(n)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = solve(arr);
    cout << ans << endl;

    return 0;
}