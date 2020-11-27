class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int l = 1, r = num, mid;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (mid * mid == num) {
                return true;
            } else if(mid * mid > num) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return false;
    }
};
