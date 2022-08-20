/* Heap is a complete binary tree (CBT) that satisfies a heap's properties.
Maxheap : child's value will be less than parent.
Minheap : child's value will be more than parent.
If there are 'n' nodes then height will be log(n).
In a CBT array, leaf nodes lie btw (n/2)+1 -> nth index. */

/*
Heap as an array :
Node->i
Parent(i)->i/2 (floor)
left child->i*2
right child->i*2+1

INSERT:
1)Insert at last index.
2)Swap if the parent is smaller.

HEAPIFY: conveting into a heap
1) no need to process leaf nodes, they are alrady in correct place.
2) compare node with its children and swap.

HEAP SORT: O(nlogn)
1)Swap a[1] with a[n].
2)root node -> correct position (heapify).
*/

#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;
    if (left <= n && arr[left] > arr[largest])
        largest = left;
    if (right <= n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void buildheap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
        heapify(arr, n, i);
}
void heapsort(int arr[], int n)
{
    for (int i = n; i > 0; i--)
    {
        swap(arr[1], arr[i]);
        heapify(arr, i - 1, 1);
    }
}
int main()
{
    int arr[8] = {-1, 54, 53, 40, 55, 10, 83, 77};
    int n = 7;
    cout<<"\noriginal array: \n";
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    buildheap(arr, n);
    cout << "\nheap before sorting: \n";
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\nheap after sorting: \n";
    heapsort(arr, n);
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}