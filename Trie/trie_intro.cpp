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

};