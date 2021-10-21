//unordered map
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> ump;
    int n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ump[s]++;
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        string s;
        cin >> s;
        cout << ump[s] << endl;
    }
    return 0;
}