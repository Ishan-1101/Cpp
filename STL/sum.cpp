#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<accumulate(a,a+10,0)<<endl;
    return 0;
}