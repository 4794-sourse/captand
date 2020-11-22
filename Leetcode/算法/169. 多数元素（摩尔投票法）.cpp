class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                res = nums[i];
                cnt++;
            } else {
                res == nums[i] ? cnt++ : cnt--;
            }
        }
        return res;
    }
};
