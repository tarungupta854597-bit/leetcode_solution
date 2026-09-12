class MinStack {
public:
 vector<int> stack;
 vector<int> min1;
 int min=INT_MAX;
    MinStack() {
       
    }
    
    void push(int value) {
        if(value<=min)
        {
            min=value;
            min1.push_back(min);
        }
        stack.push_back(value);
    }
    
    void pop() {
       if(stack.back() == min)
    {
        min1.pop_back();

        if(min1.empty())
            min = INT_MAX;
        else
            min = min1.back();
    }
        stack.pop_back();
    }
    
    int top() {
        int a=stack.back();
        return a;
    }
    
    int getMin() {
         return min1.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */