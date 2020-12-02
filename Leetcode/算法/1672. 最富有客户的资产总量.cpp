class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0, cnt;
        for (int i = 0; i < accounts.size(); i++) {
            cnt = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                cnt += accounts[i][j];
            }
            if (cnt > ans) ans = cnt;
        }
        return ans;
    }
};
