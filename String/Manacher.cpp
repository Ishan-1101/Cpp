/*
https://cp-algorithms.com/string/manacher.html
Finding all sub-palindromes in O(n) time.
Given string s with length n . Find all the pairs  $(i, j)$  such that substring  $s[i\dots j]$  is a palindrome. 
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> manacher_odd(string s) {
    int n = s.size();
    s = "$" + s + "^";
    vector<int> p(n + 2);
    int l = 1, r = 1;
    for(int i = 1; i <= n; i++) {
        p[i] = max(0, min(r - i, p[l + (r - i)]));
        while(s[i - p[i]] == s[i + p[i]]) {
            p[i]++;
        }
        if(i + p[i] > r) {
            l = i - p[i], r = i + p[i];
        }
    }
    return vector<int>(begin(p) + 1, end(p) - 1);
}

 
int main()
{
    string s = "aaaaaa";
   vector<int> ans = manacher_odd(s);
   for(auto it:ans){
    cout<<it<<" ";
   }
}