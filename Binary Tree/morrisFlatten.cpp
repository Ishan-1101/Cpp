/*There is actually a way to traverse a binary tree with a space complexity of O(1) while staying at a time complexity of O(N), though it does require modifying the tree's structure. In this problem that's specifically being called for, so it's a valid approach, though it won't always be appropriate to modify the source binary tree in other situations.

The approach is called the Morris traversal. At its heart, it takes advantage of the basic nature of ordered traversals to iterate through and unwind the tree. In a pre-order traversal of a binary tree, each vertex is processed in (node, left, right) order. This means that the entire left subtree could be placed between the node and its right subtree.

To do this, however, we'll first have to locate the last node in the left subtree. This is easy enough, since we know that the last node of a pre-order tree can be found by moving right as many times as possible from its root.

So we should be able to move through the binary tree, keeping track of the curent node (curr). Whenever we find a left subtree, we can dispatch a runner to find its last node, then stitch together both ends of the left subtree into the right path of curr, taking heed to sever the left connection at curr.

Once that's done, we can continue to move curr to the right, looking for the next left subtree. When curr can no longer move right, the tree will be successfully flattened.
*/
#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

/*void flatten(Node *root)
{
    if (root)
    {
        Node *temp = root->right;
        root->right = root->left;
        root->left = nullptr;
        Node *node = root;

        while (node->right)
            node = node->right;

        node->right = temp;
        flatten(root->right);
    }
    return;
}
*/

void flatten(Node *root)
{
    Node *head = nullptr, *curr = root;
    while (head != root)
    {
        if (curr->right == head)
            curr->right = nullptr;
        if (curr->left == head)
            curr->left = nullptr;
        if (curr->right)
            curr = curr->right;
        else if (curr->left)
            curr = curr->left;
        else
            curr->right = head, head = curr, curr = root;
    }
}

int main()
{
    struct Node *root = new Node(3);
    root->left = new Node(20);
    root->right = new Node(9);
    root->right->left = new Node(7);
    root->right->right = new Node(5);
    flatten(root);
    return 0;
}