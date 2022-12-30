/*
    Trie is also very useful when working with prefixes. Because words with the same prefixes share nodes and edges in the trie, we can efficiently answer the following questions with the trie (perhaps with some modifications):

    Are there any words in the trie that start with the prefix P?
    How many words in the trie start with the prefix P?
    What are all the words in the trie that start with the prefix P?

    Because of this, data structures similar to a trie are used in many real-life applications. Google search autocomplete is a great example of this. When you type the beginning of your search query, it looks for the possible ways to continue it that start with the typed prefix:
*/

#include<iostream>
using namespace std;

struct Node {

    Node *links[26];
    bool flag = false;

    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL);
    }

    void put(char ch, Node* node) { 
        links[ch - 'a'] = node; // create new reference node
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool checkEnd() {
        return flag;
    }

};

class Trie {

    private:
    Node* root;

    public:
        Trie() {
            root = new Node();
        }

        // O(len)
        void insert(string word) {
            Node* node = root;
            for(int i = 0; i < word.length(); i ++){
                if(!node->containsKey(word[i]))  node->put(word[i], new Node());
                // move to reference trie node
                node->get(word[i]);
            }
            node->setEnd();
        }

        // O(len)
        bool search(string word) {
            Node* node = root;
            for(int i=0; i<word.length(); i++){
                if(!node->containsKey(word[i])) return false;
                node = node->get(word[i]);
            }
            return node->checkEnd();
        }

        // O(len)
        bool starts_with(string word) {
            Node* node = root;
            for(int i=0; i<word.length(); i++){
                if(!node->containsKey(word[i])) return false;
                node = node->get(word[i]);
            }
            return true;
        }

        // int count_words_equal_to(string x) {

        // }

        // int count_words_starting_with(string prefix) {

        // }

        // void erase(string word) {

        // }

};