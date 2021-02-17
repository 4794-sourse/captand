class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums[0].size() * nums.size() != r * c) return nums;
        vector<int> q;
        vector<vector<int>> q1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                q.push_back(nums[i][j]);
            }
        }
        int ans = 0;
        for (int i = 0; i < r; i++) {
            vector<int> temp;
            for (int j = 0; j < c; j++) {
                temp.push_back(q[ans++]);
            }
            q1.push_back(temp);
        }
        return q1;
    }
};


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n = nums[0].size();
        if(nums[0].size() * nums.size() != r * c) return nums;
        vector<vector<int>> q(r, vector<int>(c));
        for (int i = 0; i < nums[0].size() * nums.size(); i++) {
            q[i / c][i % c] = nums[i / n][i % n];
        }
        return q;
    }
};
