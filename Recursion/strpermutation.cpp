#include <iostream>
using namespace std;
//amazon
void permutation(string s, string ans)
    {
        if (s.length() == 0)
        {
            cout << ans << endl;
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
permutation("ABCDEF","");
return 0;
}