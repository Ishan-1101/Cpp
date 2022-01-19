#include<bits/stdc++.h>
using namespace std;
 
int count(int row,int col){
if(row==1 || col==1)
return 1;
return count(row-1,col)+count(row,col-1);
}

int32_t main()
{
   int n;cin>>n;
   int m;cin>>m;
   cout<<count(n,m)<<endl;
   return 0;
}