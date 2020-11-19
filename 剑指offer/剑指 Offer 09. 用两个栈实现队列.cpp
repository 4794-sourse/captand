class CQueue {
    stack<int> q1, q2;
public:
    CQueue() {

    }
    
    void appendTail(int value) {
        q1.push(value);
    }

    int deleteHead() {
        if (q1.empty()) {
            return -1;
        }
        while (q1.size()) {
            q2.push(q1.top());
            q1.pop();
        }
        int t = q2.top();
        q2.pop();
        while (q2.size()) {
            q1.push(q2.top());
            q2.pop();
        }
        return t;
    }
};
