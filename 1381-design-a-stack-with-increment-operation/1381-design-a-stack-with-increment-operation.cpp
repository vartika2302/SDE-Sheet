class CustomStack {
public:
    vector<int>stack;
    CustomStack(int maxSize) {
        stack.resize(maxSize);
        stack.clear();
    }
    
    void push(int x) {
        if(stack.size()<stack.capacity()) stack.push_back(x);
    }
    
    int pop() {
        int last=-1;
        if(!stack.empty()) {
            last=stack.back();
            stack.pop_back();
        }
        return last;
    }
    
    void increment(int k, int val) {
        if(stack.size()<k) k=stack.size();
        for(int i=0;i<k;i++){
            stack[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */