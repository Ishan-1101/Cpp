#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,n,k;
    cout<<"Enter size of array and max size of subarray : "<<endl;
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array elements : \n";
    for(int x=0;x<n;x++)
    cin>>arr[x];
    int mxsum=INT_MIN;int sum=0;
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            mxsum=max(mxsum,sum);
            sum-=arr[i];
            i++;j++;
        }
    }
    cout<<"max possible sum of subarray = "<<mxsum;
    return 0;
}