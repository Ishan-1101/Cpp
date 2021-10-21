#include <iostream>
using namespace std;

int getbit(int pos, int n)
{
    if (n & (1 << pos) != 0)
        return 1;
    else
        return 0;
}
int setbit(int pos,int n)
{
    return (n | (1<<pos));
}
int clearbit(int pos,int n)
{
    int mask= ~(1<<pos);
    return(mask&n);
}
int updatebit(int n,int pos,int value)
{
    int mask= ~(1<<pos);
    n=n&mask;
    return (n | (value<<pos));
}
int main()
{   
    // int i;
    // int num;
    // cin>>num;
    // cin>>i;
    // cout<<getbit(i,num);
    // cout<<setbit(1,5);
    // cout<<clearbit(2,5);
    cout<<updatebit(5,1,1);
    return 0;
}