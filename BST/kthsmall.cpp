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

int main()
{
    node *root = new node(5);
    root->left = new node(4);
    root->left->left = new node(3);
    root->left->left->left = new node(2);
    root->right = new node(7);
    root->right->left = new node(6);
    root->right->right = new node(8);
    return 0;
}