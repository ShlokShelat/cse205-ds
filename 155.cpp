class MinStack {
        stack<int> st,mini;
public:
    MinStack() {
        
    }
    
    void push(int val) {
       if(mini.empty()){
           mini.push(val);
       }
       else{
           mini.push(min(val,mini.top()));
       }
       st.push(val);
    }
    
    void pop() {
        st.pop();
        mini.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return mini.top();
    }
};