class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        int x = -1, ans = 1;
        for(int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                ans++;
            } else {
                ans = 1;
            }
            x = max(x, ans);
        }
        return x;
    }
};
