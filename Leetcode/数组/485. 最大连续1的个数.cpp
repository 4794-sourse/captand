class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), ans = 0, cnt = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                ans++;
            } else {
                ans = 0;
            }
            cnt = max(cnt, ans);
        }
        return cnt;
    }
};
