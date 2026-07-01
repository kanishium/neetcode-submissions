class MinStack {
public:
    stack<int> st;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> st2;
        int ans=INT_MAX;
        while(!st.empty()){
            int el;
            el=st.top();
            ans=min(ans,el);
            st2.push(el);
            st.pop();
        }
        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        return ans;
    }
};
