class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> q;
        if (numRows == 0) {
            return q;
        }
        q.push_back({1});
        for (int i = 1; i < numRows; i++) {
            vector<int> t;
            t.push_back(1);
            for (int j = 1; j < i; j++) {
                t.push_back(q[i - 1][j] + q[i - 1][j - 1]);
            }
            t.push_back(1);
            q.push_back(t);
        }
        return q;
    }
};
