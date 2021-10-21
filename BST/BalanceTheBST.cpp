// C++ program to convert a left unbalanced BST to a balanced BST
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void storeBSTNodes(Node *root, vector<Node *> &nodes)
{
    if (root == NULL)
        return;

    storeBSTNodes(root->left, nodes);
    nodes.push_back(root);
    storeBSTNodes(root->right, nodes);
}
Node *balanceBST(vector<Node *> &nodes, int start, int end) //balance the BST
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    Node *root = nodes[mid];
    root->left = balanceBST(nodes, start, mid - 1);
    root->right = balanceBST(nodes, mid + 1, end);
    return root;
}
Node *solve(Node *root) //returns root of balanced BST
{
    vector<Node *> nodes; // Store nodes of given BST in sorted order
    storeBSTNodes(root, nodes);

    int n = nodes.size();
    return balanceBST(nodes, 0, n - 1);
}
void preOrder(Node *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(7);
    root->left->left->left = new Node(6);
    root->left->left->left->left = new Node(5);
    root = solve(root);
    printf("Preorder traversal of balanced BST is : \n");
    preOrder(root);
    return 0;
}
