class MinStack {
    stack <int> mainstack;
    stack<int> minstack;
public:
    
    void push(int val) {
        mainstack.push(val);
        if (minstack.empty()|| val<=minstack.top())            
            minstack.push(val);
    }
    
    void pop(){ 
        if (!mainstack.empty()){
            if (mainstack.top()==minstack.top()) minstack.pop();
    }
    mainstack.pop();
        
    }
    
    int top() {
        if (mainstack.empty()) return -1;
        return mainstack.top();
    }
    
    int getMin() {
        if (minstack.empty()) return -1;
        return minstack.top();
    }
};
