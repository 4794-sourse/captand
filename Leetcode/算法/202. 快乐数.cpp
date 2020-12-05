class Solution {
public:
    int find(int n) {
        int sum = 0;
        while (n) {
            int s = n % 10;
            sum += (s * s);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast = n, low = n;
        do {
            low = find(low);
            fast = find(fast);
            fast = find(fast);
        } while (low != fast);
        return low == 1;
    }
};
