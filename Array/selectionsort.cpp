#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array:\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter a number\n";
        cin >> arr[i];
    }
    //selection sort
    int small,s,count;
    for(int i=0; i<n-1;i++)
    {
        small= arr[i];
        for(int j = i+1; j<n;j++)
        {
         if(arr[j]<small)
            {
                small = arr[j];
                s = j;
                count=1;
            }
        }
       if(count ==1)
        {
            arr[s] = arr[i];
            arr[i]= small;
        }
        count=0;
    }
    //
    cout<<"array after sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}

