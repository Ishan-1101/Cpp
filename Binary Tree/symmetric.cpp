#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool isSymmetric(struct Node *root)
{
    Node *left, *right;
    if (!root)
        return true;
    queue<Node *> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty())
    {
        left = q.front();
        q.pop();
        right = q.front();
        q.pop();

        if (left == NULL && right == NULL)
            continue;
        if (left == NULL || right == NULL)
            return false;
        if (left->data != right->data)
            return false;

        q.push(left->left);
        q.push(right->right);
        q.push(left->right);
        q.push(right->left);
    }
    return true;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);
    if (isSymmetric(root))
        cout << "Tree is symmetric";
    else
        cout << "Not symmetric";
    return 0;
}