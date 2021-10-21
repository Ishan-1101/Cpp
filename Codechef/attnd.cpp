#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
string a[1000], b[1000];
int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    mp.clear();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i] >> b[i];
      mp[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
      if (mp[a[i]] == 1)
        cout << a[i] << endl;
      else
        cout << a[i] << ' ' << b[i] << endl;
    }
  }
 return 0;
}
