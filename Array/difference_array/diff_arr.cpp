// Given Q ranges of the form [Li,Ri], find for each point x∈[1,N] the number of ranges that contain that point.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;                              
    vector<int> elements{0, 1, 1, 0, 1, 4}; // 1 based indexing                   
    vector<int> diff(n + 2, 0); // not using the 0-th index and we need one more element in the array.

    int updateValue = 1;
    int l = 2, r = 5;
    diff[l] += updateValue;
    diff[r + 1] -= updateValue;

    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
        elements[i] += diff[i];
    }

    for (int i = 1; i <= n; i++)
        cout << elements[i] << " ";

    return 0;
}
