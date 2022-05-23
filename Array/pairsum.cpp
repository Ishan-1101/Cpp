#include <iostream>
using namespace std;

bool pairsum(int arr[],int n,int k)
{
//O(n^2) but can be done in O(n) using low and high method in case of sorted array.
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[i]+arr[j]==k)
    //         {
    //             cout<<i<<" "<<j<<endl;
    //             return true;
    //         }
            
    //     }
        
    // }
    int low=0;
    int high=n-1;
    while (low<high)
    {
        if (arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high;
            return true;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k);
    return 0;
}