class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> q;
        int n = A[0].size();
        int m = A.size();
        for (int i = 0; i < n; i++) {
            vector<int> test;
            for (int j = 0; j < m; j++) {
                test.push_back(A[j][i]);
            }
            q.push_back(test);
        }
        return q;
    }
};
