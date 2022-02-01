//Find two non repeating elements where every element is repeated twice in the given array.
#include<iostream>
using namespace std;
int main()
{
    printf("Enter size of array:");int n;cin>>n;
    int a[n],result=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter an element:");
        cin>>a[i];
        result^=a[i];//a^b
    }
        cout<<"The two non repeating elements are : "<<endl;
    int temp=result;
    for(int i=0;i<n;i++)
    {
        if((a[i]&1)!=0)
        {
            temp^=a[i];
        }
    }
    cout<<temp<<" "<<(temp^result)<<endl;

    return 0;
}