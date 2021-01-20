class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long ans1 = nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3];
        long long ans2 = nums[0] * nums[1] * nums[nums.size() - 1];
        return  ans1 > ans2 ? ans1 : ans2;
    }
};
