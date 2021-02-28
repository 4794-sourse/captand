class Solution {
public:
    vector<vector<int>> q;
    vector<int> cnt;
    bool temp[100];
    void dfs(vector<int> &nums, int ans, vector<int> &cnt) {
        if (ans == nums.size()) {
            q.push_back(cnt);
            return ;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!temp[i]) {
                temp[i] = 1;
                cnt.push_back(nums[i]);
                dfs(nums, ans + 1, cnt);
                cnt.pop_back();
                temp[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums, 0, cnt);
        return q;
    }
};
