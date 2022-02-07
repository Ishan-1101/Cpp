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
void pre(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    pre(root->left);
    pre(root->right);
}
void post(struct Node *r)
{
    if (r == NULL)
        return;
    post(r->left);
    post(r->right);
    cout << r->data << " ";
}
void in(struct Node *r)
{
    if (r == NULL)
        return;
    in(r->left);
    cout << r->data << " ";
    in(r->right);
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Pre order : ";
    pre(root);
    cout << "\nIn order : ";
    in(root);
    cout << "\nPost order : ";
    post(root);
    return 0;
}