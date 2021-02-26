class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int Max = -1;
        vector<int> l(nums.size(), 1);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    l[i] = max(l[i], l[j] + 1);
                }
            }
            Max = max(Max, l[i]); 
        }
        return Max;
    }
};
