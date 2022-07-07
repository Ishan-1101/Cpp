#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
#define int long long int

int poly_hash_string(string s)
{
    int hash=0; int prime=31; int mod=1e9+7; int p_pow=1;
    for(int i=0;i<s.size();i++)
    {
        hash+=((s[i]-'a'+1)*p_pow);
        p_pow*=prime;
        p_pow%=mod;
        hash%=mod;
    }
    return hash;
}

int32_t main()
{
    string s = "abababab";
    int s_hash = poly_hash_string(s);
    cout << s_hash;
}