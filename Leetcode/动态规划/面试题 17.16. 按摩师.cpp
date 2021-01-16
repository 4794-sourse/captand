class Solution {
public:
    int massage(vector<int>& nums) {
        if (!nums.size()) return 0;
        vector<int> dp(nums.size() + 1);
        dp[0] = 0;
        for (int i = 1; i <= nums.size(); i++) {
            dp[i] = nums[i - 1];
        }
        for (int i = 3; i <= nums.size(); i++) {
            dp[i] = max(dp[i - 2], dp[i - 3]) + nums[i - 1];
        }
        return max(dp[nums.size()],dp[nums.size() - 1]);
    }
};
