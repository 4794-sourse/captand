class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0, n = arr.size();
        for (int i = 0; i < n; i += 2) {
            int head = 0, tail = -1;
            while (tail < n) {
                while (tail < i) tail++;
                for (int j = head; j <= tail; j++) {
                    ans += arr[j];
                }
                tail++;
                head++;
            }
        }
        return ans;
    }
};
