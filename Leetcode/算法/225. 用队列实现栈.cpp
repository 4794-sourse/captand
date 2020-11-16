class MyStack {
public:
    queue<int> q1, q2;
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int t = 0;
        while (!q1.empty()) {
            if (q1.size() == 1) {
                t = q1.front();
                q1.pop();
            }
            if (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
        }
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return t;
    }
    
    /** Get the top element. */
    int top() {
        int t = 0;
        while (!q1.empty()) {
            if (q1.size() == 1) {
                t = q1.front();
            }
            q2.push(q1.front());
            q1.pop();
        }
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return t;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};
