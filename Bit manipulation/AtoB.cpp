#include<iostream>
using namespace std;

int main()
{
    int a,b;cout<<"Enter two numbers: "<<endl;cin>>a>>b;
    int c=0;
    int n=a^b;
    while(n!=0)
    {
        n=(n&(n-1));
        c++;
    }
    cout<<c<<endl;
    return 0;
}