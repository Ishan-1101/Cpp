#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int maxDepth(node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->right = new node(4);
    root->left->left = new node(3);
    root->left->right->right = new node(7);
    root->left->left->left = new node(5);
    root->left->left->right = new node(6);
    root->left->left->left->left = new node(8);
    cout << "Height of tree is " << maxDepth(root);
    return 0;
}

