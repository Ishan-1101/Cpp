#include<iostream>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
int minElement(node* root){
    if(root==NULL)//base case
    return NULL;
    else if(root->left==NULL)
    return root->data;
    else
    return minElement(root->left); 
}
int main()
{
    node* root=new node(5);
    root->left=new node(4);
    root->left->left=new node(3);
    root->left->left->left=new node(2);
    root->right=new node(7);
    root->right->left=new node(6);
    root->right->right=new node(8);
    cout<<minElement(root)<<endl;
    return 0;
}