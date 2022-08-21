class WordDictionary {
public:
    WordDictionary() {
        
    }
    
    unordered_map<int, vector<string> > mp;
    
    bool isEqual(const string &a, const string &b){
        for(int i=0;i<a.length();i++){
            if(b[i] == '.')
                continue;
            if(a[i]!=b[i])
                return false;
        }
        
        return true;
    }
    
    void addWord(string word) {
        mp[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for (auto &&s : mp[word.size()])
               if (isEqual(s, word))
                    return true;
          return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */