class MyHashSet {
public:
    // Will apply chaining technique to handle collision
    vector<list<int>> m;
    int sz;
    
    
    MyHashSet() {
        sz = 10000;
        m.resize(sz);
    }
    
    // simple mod hashing function-> we can use other hash functions also.
    int hash(int key){
        return key % sz;
    }
    
    list<int> :: iterator search(int key){
        int i = hash(key);
        return find(m[i].begin(), m[i].end(), key);
    }
    
    
    void add(int key) {
        if(contains(key)) return;
        
        int i = hash(key);
        m[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int i = hash(key);
        m[i].erase(search(key));
    }
    
    bool contains(int key) {
        
        int i = hash(key);
        if(search(key)==m[i].end()) return false;
        else return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */