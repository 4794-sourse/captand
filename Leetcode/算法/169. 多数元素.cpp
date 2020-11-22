class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            for (int j = i; j > 0 && nums[j] < nums[j - 1]; j--) {
                swap(nums[j], nums[j - 1]);
            }
        }
        return nums[nums.size() / 2];
    }
};
