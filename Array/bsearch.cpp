#include <iostream>
using namespace std;
int bsearch(int arr[], int n, int element)
{
    int start, end, mid;
    start = 0;
    end = n;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == element)
            return mid;
        else if (element < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter size of array:\n";
    cin >> n;
        int arr[n];

    for (int i=0; i < n; i++)
    {
        cout << "enter a number\n";
        cin >> arr[i];
    }
    int element;
    cout << "enter element to be searched:\n";
    cin >> element;
    cout << bsearch(arr, n, element);
    return 0;
}