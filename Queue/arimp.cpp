#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int n=5;
    int front, back;

public:
    queue()
    {
        arr = new int[n];
        front = back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "stack overflow \n";
            return;
        }
        if (front == -1)
            front++;
        back++;
        arr[back] = x;
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1||front>back)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(44);
    q.push(134);
    q.push(23);
    q.push(1);
    cout << q.peek() << endl;
    q.push(77);
    q.pop();
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    q.push(1564);
    q.pop();
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.empty();
    return 0;
}