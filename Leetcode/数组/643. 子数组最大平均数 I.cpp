class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int head = 0, tail = 0, ans = 0, sum = 0;
        while (tail < k) {
            sum += nums[tail++];
        }
        ans = sum;
        while (tail < nums.size()) {
            sum = sum - nums[head++] + nums[tail++];
            ans = max(ans, sum);
        }
        return double((double)ans/(double)k);
    }
};
