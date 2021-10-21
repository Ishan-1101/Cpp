#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int n;
long long books[N];
long long m;
bool valid(int min)
{
    int studentsReq = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (books[i] > min)
            return false;

        if (sum + books[i] > min)
        {
            studentsReq++;
            sum = books[i];
            if (studentsReq > m)
                return false;
            else
                sum += books[i];
        }
    }
    return true;
}
int AllocMinPage()
{
    int sum = 0;
    if (n < m)
        return -1;
    for (int i = 0; i < n; i++)
        sum += books[i];
    int lo = 0, hi = sum, ans = INT_MAX;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (valid(mid))
        {
            ans = min(ans, mid);
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> books[i];
    cout << AllocMinPage() << endl;
    return 0;
}