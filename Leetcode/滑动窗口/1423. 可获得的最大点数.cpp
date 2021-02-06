class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> q;
        int n = cardPoints.size(), ans = 0, tot = 0;
        for (int i = n - k; i < n; i++) q.push_back(cardPoints[i]);
        for (int i = 0; i < k; i++) q.push_back(cardPoints[i]);
        for (int i = 0; i < q.size(); i++) {
            if (i < k) {
                ans += q[i];
                continue;
            }
            tot = max(tot, ans);
            ans = ans - q[i - k] + q[i];
        }
        tot = max(tot, ans);
        return tot;
    }
};
