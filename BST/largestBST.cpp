#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
struct info
{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};
info LargestBSTinBT(Node *root)
{
    //base cases
    if (root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }

    info leftInfo = LargestBSTinBT(root->left);
    info rightInfo = LargestBSTinBT(root->right);
    info curr;
    curr.size = (1 + leftInfo.size + rightInfo.size);
    if (leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data)
    {
        curr.min = min(leftInfo.min, min(root->data, rightInfo.min));
        curr.max = max(leftInfo.max, max(root->data, rightInfo.max));
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }
    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    cout << "Largest BST in Binary tree : " << LargestBSTinBT(root).ans << endl;
    return 0;
}
