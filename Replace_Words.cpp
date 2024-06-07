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
private:

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
        if (word.length() == 0 or root->isTerminal) {
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

    // recursive helper function to delete a word in trie
    void removeUtil(TrieNode* root, string word) {

        // base case
        if (word.length() == 0) {
            root->isTerminal = false;
            return;
        }

        // finding index and child trie node of character
        int index = word[0] - 'a';
        TrieNode* child;


        // character present
        if(root->children[index] != NULL) {
            child = root->children[index];
        }

        // character absent
        else {
            return;
        }

        // recursive call
        removeUtil(child, word.substr(1));

    }

public:

    // constructor
    Trie() {
        root = new TrieNode('\0');
    }

    // add a word in trie
    void insert(string word) {
        insertUtil(root, word);
    }

    // search a word in trie
    bool search(string word) {
        return searchUtil(root, word);
    }

    // delete a word in trie
    void remove(string word) {
        removeUtil(root, word);
    }

    string getRoot(string word) {
        string r;
        TrieNode *temp = root;
        int i = 0;
        while (!temp->isTerminal) {
            r.push_back(word[i]);
            int index = word[i] - 'a';
            if (temp->children[index] != NULL) {
                temp = temp->children[index];
            }
            i++;
        }
        return r;
    }
};

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        Trie *trie = new Trie();
        for (string &word: dictionary) {
            trie->insert(word);
        }

        vector<string> sentenceWords;
        string temp;
        for (char &c: sentence) {
            if (c == ' ') {
                if (trie->search(temp)) {
                    temp = trie->getRoot(temp);
                }
                sentenceWords.push_back(temp);
                temp = "";
            } else {
                temp.push_back(c);
            }
        }
        if (trie->search(temp)) {
            temp = trie->getRoot(temp);
        }
        sentenceWords.push_back(temp);

        string ans;
        for (string &word: sentenceWords) {
            ans += word;
            ans.push_back(' ');
        }
        ans.pop_back();

        return ans;
    }
};

int main() {

    

    return 0;
}