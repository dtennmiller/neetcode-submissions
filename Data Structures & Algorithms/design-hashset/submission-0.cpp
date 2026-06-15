class MyHashSet {
public:
    set<int>* intSet;
    MyHashSet() {
        intSet = new set<int>();
    }
    
    void add(int key) {
        intSet->insert(key);
    }
    
    void remove(int key) {
        if (contains(key))
        {
            intSet->erase(key);
        }
    }
    
    bool contains(int key) {
        return intSet->count(key) > 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */