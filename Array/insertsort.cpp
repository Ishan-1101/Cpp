#include<iostream>
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

//insert sort
for (int i = 0; i < n; i++)
{
    int current=arr[i];
    int j=i-1;
    while (arr[j]>current && j>=0)                              
    {       
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
//
    cout<<"array after sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}