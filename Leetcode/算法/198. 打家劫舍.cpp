class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        vector<int> h = vector<int>(nums.size(), 0);
        h[0] = nums[0];
        h[1] = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            h[i] = max(h[i - 1], h[i - 2] + nums[i]);
        }
        return h[nums.size() - 1];
    }
};
