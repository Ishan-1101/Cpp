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

class Code
{

    int helper(string &data)
    {
        int pos = data.find(',');
        int val = stoi(data.substr(0, pos));
        data = data.substr(pos + 1);
        return val;
    }

public:
    string serialize(Node *root)
    {
        if (root == nullptr)
            return "#";
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }
    Node *deserialize(string data)
    {
        return mydeserialize(data);
    }
    Node *mydeserialize(string &data)
    {
        if (data[0] == '#')
        {
            if (data.size() > 1)
                data = data.substr(2);
            return nullptr;
        }
        else
        {
            Node *node = new Node(helper(data));
            node->left = mydeserialize(data);
            node->right = mydeserialize(data);
            return node;
        }
    }
};

int main(){
    //call functions 
    return 0;
}