class MyHashMap {
private:
    vector<vector<int>> hashMap;
public:
    MyHashMap() {}
    
    void put(int key, int value) {
        
        for (int i = 0; i < hashMap.size(); i++)
        {
            if (key == hashMap[i][0])
            {
                cout << "Updated new value" << endl;
                hashMap[i][1] = value;
                return;
            }
        }
            
        cout << "Add new key to map." << endl;
        vector<int> newPair = {key, value};
        hashMap.push_back(newPair);
        
    }
    
    int get(int key) {
        for (int i = 0; i < hashMap.size(); i++)
        {
            if (key == hashMap[i][0])
            {
                cout << hashMap[i][1] << endl;
                return hashMap[i][1];
            }
        }
        cout << "Could not find entry" << endl;
        return -1;
    }
    
    void remove(int key) {
        for (int i = 0; i < hashMap.size(); i++)
        {
            if (key == hashMap[i][0])
            {
                cout << "Erased mapping." << endl;
                hashMap.erase(hashMap.begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */