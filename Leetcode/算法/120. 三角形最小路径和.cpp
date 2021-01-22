class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.size() == 0) return 0;
        if (triangle.size() == 1) return triangle[0][0];
        int n = triangle.size();
        for (int i = n - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                triangle[i - 1][j] += min(triangle[i][j], triangle[i][j + 1]);
            }
        }
        return triangle[0][0];
    }
};
