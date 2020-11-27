class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == nums[i + 1]) {
                i++;
            } else {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
