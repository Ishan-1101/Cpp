#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;

vector<bool> isPrime(N, 1); // check if ith number is prime or not

int main()
{
    // O(N*log(log N))
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // check Q queries O(q)*O(1)
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        if (isPrime[num])
            cout << "PRIME\n";
        else
            cout << "NOT PRIME\n";
    }

    return 0;
}