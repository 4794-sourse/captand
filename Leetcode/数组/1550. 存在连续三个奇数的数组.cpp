class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans = 0, n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2) {
                ans++;
                if (ans == 3) return true;
            } else {
                ans = 0;
            }
        }
        return false;
    }
};
