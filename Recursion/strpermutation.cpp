#include <iostream>
using namespace std;
// amazon
void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << " ";
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string rem = s.substr(0, i) + s.substr(i + 1);
        permutation(rem, ans + ch);
    }
}
int main()
{
    string s = "";
    cin >> s;
    permutation(s, "");
    return 0;
}