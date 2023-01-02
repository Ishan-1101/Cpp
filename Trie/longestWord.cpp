#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{

    TrieNode *links[26];
    bool end = false;

    bool contains(char ch)
    {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, TrieNode *node)
    {
        links[ch - 'a'] = node;
    }

    TrieNode *get(char ch)
    {
        return links[ch - 'a'];
    }

    void setEnd()
    {
        end = true;
    }

    bool checkEnd()
    {
        return end;
    }
};

class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->contains(word[i]))
            {
                node->put(word[i], new TrieNode);
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }

    bool starts_with(string prefix)
    {
        TrieNode *node = root;
        for (int i = 0; i < prefix.length(); i++)
        {
            if (!node->contains(prefix[i]))
                return false;
            node = node->get(prefix[i]);
        }
        return true;
    }
    string longestWord(vector<string> &words)
    {
        string longest = "";

        for (auto &word : words)
        {
            insert(word);
        }

        for (auto &word : words)
        {
            if (starts_with(word))
            {
                if (word.size() > longest.size())
                {
                    longest = word;
                }
                else if (word.size() == longest.size() && word < longest)
                {
                    longest = word;
                }
            }
        }

        return longest;
    }
};

int main()
{
    vector<string> w = {"a", "banana", "app", "appl", "ap", "apply", "apple"};
    Trie obj;
    string ans = obj.longestWord(w);
    cout << ans << endl;
    return 0;
}