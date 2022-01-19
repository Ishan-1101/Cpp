#include<iostream>
using namespace std;

int aPowerb(int a, int b)
{
    //Base Case
    if(a==0)return 0;
    if(b==0)return 1;
    //R.C. 
    int ans=a*aPowerb(a,b-1);
    return ans;
}
int main()
{
    int a,b;cin>>a>>b;int result=aPowerb(a,b);
    cout<<result;
    return 0;
}