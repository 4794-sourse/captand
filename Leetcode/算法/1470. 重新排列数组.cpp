class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums1;
        for (int i = 0, j = n; i < n && j < 2 * n; i++, j++) {
            nums1.push_back(nums[i]);
            nums1.push_back(nums[j]);
        }
        return nums1;
    }
};
