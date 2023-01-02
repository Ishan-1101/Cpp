/*
    Problem Statement: Given a string of alphabetic characters. Return the count of distinct substrings of the string(including the empty string) using the Trie data structure.
    Input:
    S1= “ababa”
    Output: Total number of distinct substrings : 10
    Explanation: All the substrings of the string are a, ab, aba, abab, ababa, b, ba, bab, baba, a, ab, aba, b, ba, a. Many of the substrings are duplicated. The distinct substrings are a, ab, aba, abab, ababa, b, ba, bab, baba.
    Total Count of the distinct substrings is 9 + 1(for empty string) = 10.
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

// O(n^2 log m)
int distinct_substr(string s)
{
    unordered_set<string> us;
    for (int i = 0; i < s.size(); ++i)
    {
        string ss = "";
        for (int j = i; j < s.size(); ++j)
        {
            ss += s[j];
            us.insert(ss);
        }
    }
    return us.size() + 1;
}

struct Node
{
    Node *links[26];

    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }
};

// O(n^2)
int countDistinctSubstrings(string &s)
{
    Node *root = new Node();
    int count = 0, n = s.size();

    for (int i = 0; i < n; i++)
    {
        Node *node = root;

        for (int j = i; j < n; j++)
        {
            if (!node->containsKey(s[j]))
            {
                node->put(s[j], new Node());
                count++;
            }
            node = node->get(s[j]);
        }
    }
    return count + 1;
}

int main()
{
    string s;
    cin >> s;
    // int count = distinct_substr(s);
    int count = countDistinctSubstrings(s);
    cout << count << endl;

    return 0;
}