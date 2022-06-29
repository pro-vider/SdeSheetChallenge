class MinStack {
public:
     long long mini;
        vector<long long> st;
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int val) {
        long long value=val;
        if(st.size()==0)
        {
            st.push_back(value);
            mini=val;
        }
        else if(value<mini)
        {
            long long x=2*value-mini;
            st.push_back(x);
            mini=value;
        }
        else
            st.push_back(value);
        
    }
    
    void pop() {
        if(st.back()<mini)
             mini=2*mini-st.back();
        st.pop_back();
        
    }
    
    int top() {
        if(st.back()<mini)
            return mini;
        else
            return st.back();
        
    }
    
    int getMin() {
        return mini;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
