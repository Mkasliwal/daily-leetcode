class MyQueue {
public:
    stack<int> input;
    stack<int> output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()) {
            transferElement();
        }
        int el = output.top();
        output.pop();
        return el;
        
    }
    
    int peek() {
        if(output.empty()) {
            transferElement();
        }
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
    
    void transferElement() {
        while(input.empty() != true) {
            int el = input.top();
            input.pop();
            output.push(el);
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

