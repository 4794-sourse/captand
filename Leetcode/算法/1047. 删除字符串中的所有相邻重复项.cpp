class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> s;
        for (int i = 0; i < S.size(); i++) {
            if (s.size() && S[i] == s.top()) {
                s.pop();
            } else {
                s.push(S[i]);
            }
        }
        string str = "";
        while (s.size()) {
            str += s.top();
            s.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
