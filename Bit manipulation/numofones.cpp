#include <iostream>
using namespace std;

int numones(int n)
{
    int count=0;
    while (n!=0)
    {
        n=n&n-1;
        count++;
    }
    return count;
}
int main()
{   
    cout<<numones(19);
    return 0;
}