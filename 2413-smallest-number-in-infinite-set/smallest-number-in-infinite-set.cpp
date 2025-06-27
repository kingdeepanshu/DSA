class SmallestInfiniteSet {
public:
    set<int> s;
    // priority_queue<int, vector<int>, greater<int>> pq;
    SmallestInfiniteSet() {
        for(int i = 1; i <= 1000; i++){
            s.insert(i);
            // pq.push(i);
        }
    }
    
    int popSmallest() {
        // int a = pq.top();
        int a = *s.begin();
        // pq.pop();
        s.erase(a);
        return a;
    }
    
    void addBack(int num) {
        if(!(s.find(num) != s.end())){
            s.insert(num);
            // pq.push(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */