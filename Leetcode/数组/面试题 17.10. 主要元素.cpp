class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int m = nums[len / 2], n = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == m) n++;
            if (n > len / 2) return nums[i];
        }
        return -1;
    }
};
