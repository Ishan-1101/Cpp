#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{
    unordered_map<char, TrieNode *> child;
    bool isLast;

    TrieNode()
    {
        for (char i = 'a'; i <= 'z'; i++)
            child[i] = NULL;

        isLast = false;
    }
};

TrieNode *root = NULL;

void insert(string s)
{
    int len = s.length();
    TrieNode *itr = root;
    for (int i = 0; i < len; i++)
    {
        TrieNode *nextNode = itr->child[s[i]];
        if (nextNode == NULL)
        {
            nextNode = new TrieNode();
            itr->child[s[i]] = nextNode;
        }
        itr = nextNode;
        if (i == len - 1)
            itr->isLast = true;
    }
}

void displayContactsUtil(TrieNode *curNode, string prefix)
{
    if (curNode->isLast)
        cout << prefix << endl;

    // Find all the adjacent Nodes to the current node
    for (char i = 'a'; i <= 'z'; i++)
    {
        TrieNode *nextNode = curNode->child[i];
        if (nextNode != NULL)
            displayContactsUtil(nextNode, prefix + (char)i);
    }
}

void displayContacts(string str)
{
    TrieNode *prevNode = root;
    string prefix = "";
    int len = str.length();

    int i;
    for (i = 0; i < len; i++)
    {
        // 'prefix' stores the string formed so far
        prefix += (char)str[i];

        // Get the last character entered
        char lastChar = prefix[i];

        // Find the Node corresponding to the last
        // character of 'prefix' which is pointed by
        // prevNode of the Trie
        TrieNode *curNode = prevNode->child[lastChar];

        // If nothing found, then break the loop as
        // no more prefixes are going to be present.
        if (curNode == NULL)
        {
            cout << "nNo Results Found for" << prefix
                 << "n";
            i++;
            break;
        }

        // If present in trie then display all
        // the contacts with given prefix.
        cout << "nSuggestions based on" << prefix
             << " are n";
        displayContactsUtil(curNode, prefix);

        // Change prevNode for next prefix
        prevNode = curNode;
    }

    // Once search fails for a prefix, we print
    // "Not Results Found" for all remaining
    // characters of current query string "str".
    for (; i < len; i++)
    {
        prefix += (char)str[i];
        cout << "nNo Results Found for " << prefix
             << "n";
    }
}

// Insert all the Contacts into the Trie
void insertIntoTrie(string contacts[], int n)
{
    // Initialize root Node
    root = new TrieNode();

    // Insert each contact into the trie
    for (int i = 0; i < n; i++)
        insert(contacts[i]);
}

// Driver program to test above functions
int main()
{
    // Contact list of the User
    string contacts[] = {"gforgeeks", "geeksquiz"};

    // Size of the Contact List
    int n = sizeof(contacts) / sizeof(string);

    // Insert all the Contacts into Trie
    insertIntoTrie(contacts, n);

    string query = "gekk";

    // Note that the user will enter 'g' then 'e', so
    // first display all the strings with prefix as 'g'
    // and then all the strings with prefix as 'ge'
    displayContacts(query);

    return 0;
}
