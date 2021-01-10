class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) ans++;
            else break;
        }
        for (int i = ans; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) return false;
            if (nums[i + 1] - nums[i] > 1) {
                ans -=(nums[i + 1] - nums[i] - 1);
            }
            if (ans < 0) {
                return false;
            }
        }
        return true;
    }
};
