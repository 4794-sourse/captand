class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        unordered_set<char> nums;
        for (int i = 0; i < J.length(); i++) {
            nums.insert(J[i]);
        }
        for (int i = 0; i < S.length(); i++) {
            if (nums.count(S[i])) {
                ans++;
            }
        }
        return ans;
    }
};
