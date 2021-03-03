class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> q;
        for (int i = 0; i <= num; i++) {
            q.push_back(func(i));
        }
        return q;
    }
    int func(int cnt) {
        int ans = 0;
        while (cnt) {
            cnt -= (cnt & -cnt);
            ans++;
        }
        return ans;
    }
};
