#include<iostream>
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
Node* searchBST(Node* root,int key)//O(logn)
{
    if(root==NULL)
    return NULL;

    if(root->data==key)
    return root;

    if(root->data>key)
    return searchBST(root->left,key);

    return searchBST(root->right,key);//data<key
}
int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left= new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
    
    inorder(root);
    cout << endl;
    if(searchBST(root,88)==NULL)
    cout<<"Not found"<<endl;
    else
    cout<<"Element found"<<endl;
    return 0;
}
