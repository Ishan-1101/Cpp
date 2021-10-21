#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node *insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);

    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
int main()
{
    Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 20);
    root = insert(root, 0);
    root = insert(root, 12);
    root = insert(root, 13);
    root = insert(root, 7);
    inorder(root);
    cout << endl;
    return 0;
}
