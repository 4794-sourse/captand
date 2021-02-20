class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, r = n;
        while(l <= r) {
            long mid = l + (r - l) / 2;
            long sum = (1 + mid) * mid / 2;
            if (sum == n) {
                return mid;
            } else if (sum > n) {
                r = mid - 1;
            } else if (sum < n) {
                l = mid + 1;
            }
        }
        return l - 1;
    }
};
