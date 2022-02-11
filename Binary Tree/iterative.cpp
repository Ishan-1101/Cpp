//inorder
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

unordered_map<Node*,int>cnt;

void inorder(Node* root){
stack<Node*>S;
S.push(root);
while(!S.empty())
{
    Node* curr = S.top();
    if(!curr)
    {
        S.pop();
        continue;
    }
    if(cnt[curr]==0) S.push(curr->left);
    else if(cnt[curr]==1) cout<<curr->data<<" ";
    else if(cnt[curr]==2) S.push(curr->right);
    else S.pop();
    cnt[curr]++;
}
}

void in(Node* root){
    if(!root)return;
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}

int main()
{
struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "\nIn order via recursion: ";
    in(root);
    cout << "\nIn order via iterative method : ";
    inorder(root);
    cout<<endl;
    return 0;
}