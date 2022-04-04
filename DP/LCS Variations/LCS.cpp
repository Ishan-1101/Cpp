//Print length of LCS (subsequence->discontinuous;substring->consecutive)
// input strings x and y; length of x=n ; length of y=m;
// eg: (I/P) x= a b c d g h, y= a b e d f h r;
// length of a b d h = 4 (O/P)
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
static int dp[101][101];
/* 
RECURSION
int lcs(string x, string y, int n, int m){
    //base condition 
    if(n==0||m==0) return 0;
    //choice diagram
    if(x[n-1]==y[n-1]) 
    return 1+lcs(x,y,n-1,m-1);
    else
    return max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
}
MEMOIZE
int lcs(string x, string y, int n, int m){
    //base condition 
    if(n==0||m==0) return 0;
    //memoize
    if(dp[n][m]!=-1) return dp[n][m];
    //choice diagram
    if(x[n-1]==y[n-1]) 
    return dp[n][m]=1+lcs(x,y,n-1,m-1);
    else
    return dp[n][m]=max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
}
*/
int main()
{
   string str1, str2;
   cout<<"Enter two strings:\n";
   cin >> str1 >> str2;
   int n=str1.length();
   int m=str2.length();
   dp[n+1][m+1];
   memset(dp, -1, sizeof(dp));
   cout<<"Output:"<<lcs(str1,str2,n,m);
   return 0;
}