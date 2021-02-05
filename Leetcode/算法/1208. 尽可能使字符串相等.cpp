class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0, r = 0, n = s.size(), cost = 0, ans = -1;
        while (r < n) {
            cost += abs(s[r] - t[r++]);
            while (cost > maxCost) cost -= abs(s[l] - t[l++]);
            if (r - l > ans) ans = r - l;
        }
        return ans;
    }
};
