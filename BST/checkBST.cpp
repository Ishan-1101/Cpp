#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
// int findMax(node* root){

// }
// bool isBST(node *root)             //O(n^2)
// {
//     if (root == NULL)
//         return true;
//     if (root->left != NULL && findMax(root->left)>root->data)
//         return false;
//     if (root->right != NULL && findMax(root->right) < root->data)
//         return false;
//     if (!isBST(root->left) && !isBST(root->right))
//         return false;
//     else
//         return true;
// }
int isBSTutil(node* root,int min,int max) //O(n)
{
    if(!root)
    return 1;
    return (root->data>min && root->data<max
    && isBSTutil(root->left,min,root->data)
    && isBSTutil(root->right,root->data,max)
    );
}
int main()
{
    node *root = new node(5);
    root->left = new node(4);
    root->left->left = new node(3);
    root->left->left->left = new node(2);
    root->right = new node(7);
    root->right->left = new node(6);
    root->right->right = new node(8);
    if (isBSTutil(root,INT_MIN,INT_MAX)==1)
        cout << "Valid BST!" << endl;
    else
        cout << "Invalid BST!" << endl;
    return 0;
} 