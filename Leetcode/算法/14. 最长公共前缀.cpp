class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if (strs.empty()) return res;
        for (int i = 0; ; i++) {
            if (i > strs[0].size()) return res;
            char c = strs[0][i];
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != c || strs[j].size() <= i) {
                    return res;
                }
            }
            res += c;
        }
        return res;
    }
};
