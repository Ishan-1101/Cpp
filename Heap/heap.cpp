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
2)Swap if the parent is smaller

HEAPIFY: conveting into a heap
1) no need to process leaf nodes, they are alrady in correct place
2) compare node with its children and swap
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

int main()
{
    int arr[6] = {-1, 54, 53, 40, 55, 60};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
        heapify(arr, n, i);
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}