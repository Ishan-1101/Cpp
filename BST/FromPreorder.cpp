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
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
node* constructBST(int preodr[],int* preIdx,int key,int min,int max,int n){
    if(*preIdx>=n)
    return NULL;
    node* root=NULL;
    if(key>min&&key<max)
    {
        root=new node(key);
        *preIdx++;
        if(*preIdx<n){
            root->left=constructBST(preodr,preIdx,preodr[*preIdx],min,key,n);
        }
        if(*preIdx>n){
                        root->left=constructBST(preodr,preIdx,preodr[*preIdx],key,max,n);
        }
    }
    return root;
}
int main()
{
    int preodr[]={10,2,1,13,11};
    int n=5;
    int preIdx=0;
    node* root=constructBST(preodr,&preIdx,preodr[0],INT_MIN,INT_MAX,n);
    preorder(root);
    inorder(root);
    return 0;
}