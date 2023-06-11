/* Sahil Raj */

#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        this->data = ch;
        for (int i=0; i<26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }

};

class Trie {

    TrieNode* root;

    // recursive helper function to add a word in trie
    void insertUtil(TrieNode* root, string word) {

        // base case
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        // finding index and making child trie node of character
        int index = word[0] - 'a';
        TrieNode* child;

        // character present
        if (root->children[index] != NULL) {
            child = root->children[index];
        }

        // character absent
        else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursive call
        insertUtil(child, word.substr(1));

    }

    // recursive helper function to search a word in trie
    bool searchUtil(TrieNode* root, string word) {

        // base case
        if (word.length() == 0) {
            return root->isTerminal;
        }

        // finding index and child trie node of character
        int index = word[0] - 'a';
        TrieNode* child;

        // character present
        if (root->children[index] != NULL) {
            child = root->children[index];
        }

        // character absent
        else {
            return false;
        }

        // recursive call
        return searchUtil(child, word.substr(1));

    }

    // recursive helper function to search a prefix in trie
    bool prefixUtil(TrieNode* root, string word) {

        // base case
        if (word.length() == 0) {
            return true;
        }

        // finding index and child trie node of character
        int index = word[0] - 'a';
        TrieNode* child;

        // character present
        if (root->children[index] != NULL) {
            child = root->children[index];
        }

        // character absent
        else {
            return false;
        }

        // recursive call
        return prefixUtil(child, word.substr(1));

    }
    
public:
    Trie() {
        root = new TrieNode('\0');
    }
    
    void insert(string word) {
        insertUtil(root, word); 
    }
    
    bool search(string word) {
        return searchUtil(root, word);
    }
    
    bool startsWith(string prefix) {
        return prefixUtil(root, prefix);
    }
};

int main() {

    

    return 0;
}