class Solution {
public:
    stack<char> sta;
    bool isValid(string s) {
        for (int i = 0;  i < s.length(); i++) {
            if (sta.size()) {
                if (sta.top() == '[' && s[i] == ']') {
                    sta.pop();
                } else if (sta.top() == '{' && s[i] == '}') {
                    sta.pop();
                } else if (sta.top() == '(' && s[i] == ')') {
                    sta.pop();
                } else {
                    sta.push(s[i]);
                }
            } else {
                sta.push(s[i]);
            }
        }
        if (sta.size()) {
            return false;
        } else {
            return true;
        }
    }
};
