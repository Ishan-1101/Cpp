#include <bits/stdc++.h>
using namespace std;

struct node{

    int data;
    struct node* left;
    struct node* right;

    node(int value){
        data=value;
        left=NULL;
        right =NULL;
    }

};

int countNodes(struct node* r){
    if(r==NULL)return 0;
    return countNodes(r->left)+countNodes(r->right)+1;
}

void pre(struct node* r){
    if(r==NULL)return;
    cout<<r->data<<" ";
    pre(r->left);
    pre(r->right);
}

int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->right=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(6);
    pre(root); printf("\n");
    cout<<"Number of nodes in the tree = "<<countNodes(root)<<endl;
    return 0;
}