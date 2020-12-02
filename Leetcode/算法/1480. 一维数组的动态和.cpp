class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans = 0;
        vector<int> nums1;
        for (int i = 0; i < nums.size(); i++) {
            ans += nums[i];
            nums1.push_back(ans);
        }
        return nums1;
    }
};
