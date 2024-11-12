#include <bits/stdc++.h>
using namespace std;

class Trie {
public:
    class TrieNode {
    public:
        bool mark = false;
        unordered_map<char, TrieNode*> next;
    };
    
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }
    
    void insert(const string &word) {
        TrieNode* curr = root;
        for (char ch : word) {
            if (!curr->next[ch]) {
                curr->next[ch] = new TrieNode();
            }
            curr = curr->next[ch];
        }
        curr->mark = true;
    }
    
    bool search(const string &word, bool allow_prefix = false) {
        TrieNode* curr = root;
        for (char ch : word) {
            if (!curr->next[ch]) {
                return false;
            }
            curr = curr->next[ch];
        }
        return allow_prefix || curr->mark;
    }
    
    bool startsWith(const string &prefix) {
        return search(prefix, true);
    }

    ~Trie() {
    deleteTrie(root);
    }

private:
    void deleteTrie(TrieNode* node) {
        for (auto &child : node->next) {
            deleteTrie(child.second);
        }
        delete node;
    }
};

int main() {
    Trie* trie = new Trie();

    trie->insert("apple");
    trie->insert("app");
    trie->insert("bat");
    trie->insert("ball");

    cout << "Search 'apple': " << (trie->search("apple") ? "Found" : "Not Found") << endl; // Output: Found
    cout << "Search 'app': " << (trie->search("app") ? "Found" : "Not Found") << endl;     // Output: Found
    cout << "Search 'bat': " << (trie->search("bat") ? "Found" : "Not Found") << endl;     // Output: Found
    cout << "Search 'bats': " << (trie->search("bats") ? "Found" : "Not Found") << endl;   // Output: Not Found

    cout << "Starts with 'app': " << (trie->startsWith("app") ? "Yes" : "No") << endl; // Output: Yes
    cout << "Starts with 'bat': " << (trie->startsWith("bat") ? "Yes" : "No") << endl; // Output: Yes
    cout << "Starts with 'cat': " << (trie->startsWith("cat") ? "Yes" : "No") << endl; // Output: No

    return 0;
}
