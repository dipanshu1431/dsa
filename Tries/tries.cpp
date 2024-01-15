#include <iostream>
#include <string>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    // insert in trie
    void insertUtlit(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        // asume word in CAPS latter
        int index = word[0] - 'A';
        TrieNode *child;
        // present in tries
        if (word.length() != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent in tries
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // recursion
        insertUtlit(child, word.substr(1));
    }
    bool searchUtlit(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        TrieNode *child;
        int index = word[0] - 'A';
        if (word.length() != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchUtlit(child, word.substr(1));
    }
    bool searchWord(string word)
    {
        return searchUtlit(root, word);
    }
    void inserWord(string word)
    {
        return insertUtlit(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->inserWord("ARM");
    t->inserWord("DO");
    t->inserWord("TIME");
    cout << "Present or not " << t->searchWord("TIM") << endl;
    return 0;
}