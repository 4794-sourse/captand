class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, now = 0;
        for (int i = 0; i < nums.size(); i++) {
            now = max(now + nums[i], nums[i]);
            ans = max(ans, now);
        }
        return ans;
    }
};
