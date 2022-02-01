//Using XOR it can be solved in O(N) time with O(1) space
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    printf("Enter Size of the Array: ");
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
    printf("Enter an element: "); 
    cin>>arr[i];
    }
    int result=0;
    for(int i = 0; i < n; i++){
        result^=arr[i];
    }
    cout<<result<<endl;
    return 0;
}