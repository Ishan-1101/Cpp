#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)

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
void storeInOrder(Node *root, vector<int> &nodes)
{
  if (root == NULL)
    return;

  storeInOrder(root->left, nodes);
  nodes.push_back(root->data);
  storeInOrder(root->right, nodes);
}
vector<int> mergevectors(vector<int> v1, vector<int> v2)
{
  vector<int> v;
  for (int i = 0; i < v1.size(); i++)
    v.push_back(v1[i]);
  for (int i = 0; i < v2.size(); i++)
    v.push_back(v2[i]);
  return v;
}
Node *vectorToBST(vector<int> v,
                  int start, int end)
{
  
  if (start > end)
    return NULL;

  int mid = (start + end) / 2;
  Node *root = new Node(v[mid]);

  
  root->left = vectorToBST(v, start,
                           mid - 1);


  root->right = vectorToBST(v, mid + 1, end);

  return root;
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
  Node *root1 = new Node(3);
  root1->left = new Node(2);
  root1->left->left = new Node(1);
  root1->right = new Node(4);
  Node *root2 = new Node(6);
  root2->left = new Node(5);
  root2->right = new Node(7);
  vector<int> a1, a2;
  vector<int> a3(a1.size() + a2.size());
  storeInOrder(root1, a1);
  storeInOrder(root2, a2);
  a3 = mergevectors(a1, a2);
  // f(a3.size())
  //         cout
  //     << a3[i] << " ";
  // cout << endl;
  Node *root = vectorToBST(a3, 0, a3.size() - 1);
  preOrder(root);
  return 0;
}
