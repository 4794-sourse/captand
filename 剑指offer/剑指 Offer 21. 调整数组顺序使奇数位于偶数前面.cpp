class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int head = 0, tail = nums.size() - 1;
        while (head < tail) {
            while (head < tail && nums[head] % 2 == 1) {
                head += 1;
            } 
            while (head < tail && nums[tail] % 2 == 0) {
                tail -= 1;
            }
            if (head < tail) {
                swap(nums[head], nums[tail]);
            }
        }
        return nums;
    }
};
