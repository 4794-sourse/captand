class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int> > q;
        int l = 1;
        for (int i = 0; i < s.size(); i++) {
            if (i == s.size() - 1 || s[i] != s[i + 1]) {
                if (l >= 3) {
                    q.push_back({i - l + 1, i});
                }
                l = 1;
            } else {
                l++;
            }
        }
        return q;
    }
};
