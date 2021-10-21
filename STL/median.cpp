#include <bits/stdc++.h>
using namespace std;

priority_queue<int> maxheap;
priority_queue<int, vector<int>, greater<int>> minheap;
void insert(int x)
{
    if (maxheap.size() == minheap.size())
    {
        if (maxheap.size() == 0)
        {
            maxheap.push(x);
            return;
        }
        if (x < maxheap.top())
        {
            maxheap.push(x);
        }
        else
        {
            minheap.push(x);
        }
    }
    else
    {
        if (maxheap.size() > minheap.size())
        {
            if (x >= maxheap.top())
                minheap.push(x);

            else
            {
                int temp = maxheap.top();
                maxheap.pop();
                minheap.push(temp);
                maxheap.push(x);
            }
        }
        else
        {
            if (x <= minheap.top())
                maxheap.push(x);

            else
            {
                int temp = minheap.top();
                minheap.pop();
                maxheap.push(temp);
                minheap.push(x);
            }
        }
    }
}
double findMedian()
{
    if (minheap.size() == maxheap.size())
        return ((minheap.top() + maxheap.top()) / 2.0);
    else
    {
        if (maxheap.size() > minheap.size())
            return maxheap.top();
        else
            return minheap.top();
    }
}
int main()
{
    insert(50);
    cout << findMedian() << endl;
    insert(4);
    cout << findMedian() << endl;

    insert(43);
    cout << findMedian() << endl;

    insert(46);
    cout << findMedian() << endl;

    insert(47);
    cout << findMedian() << endl;

    insert(432);
    cout << findMedian() << endl;

    insert(2);
    cout << findMedian() << endl;

    return 0;
}