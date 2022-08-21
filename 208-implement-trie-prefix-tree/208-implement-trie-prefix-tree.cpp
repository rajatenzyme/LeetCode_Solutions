class Trie {
    
    
    
public:

    Trie() {
    }
    
    Trie* children[26] = {NULL};
    bool isTerminal = false;
    
    void insert(string word) {
        Trie *root = this;
        for(auto ch : word){
            ch = ch - 'a';
            if(!root->children[ch])
                root->children[ch] = new Trie();
            root = root->children[ch];
        }
        root->isTerminal = true;
        
    }
    
    bool search(string word) {
        Trie *root = this;
        for(auto ch : word){
            ch = ch - 'a';
            if(!root->children[ch])
                return false;
            root = root->children[ch];
        }
        return root->isTerminal;
    }
    
    
    bool startsWith(string prefix) {
        Trie *root = this;
        for(auto ch : prefix){
            ch = ch - 'a';
            if(!root->children[ch])
                return false;
            root = root->children[ch];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */