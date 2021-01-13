class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int> > q;
        for (int i = 1; i < target; i++) {
            int ans = 0;
            vector<int> q1;
            for (int j = i; j < target; j++) {
                if (ans == target) {
                    q.push_back(q1);
                    break;
                } else if (ans < target) {
                    q1.push_back(j);
                    ans += j;
                } else {
                    break;
                }
            }
        }
        return q;
    }
};

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>>vec;
        vector<int> res;
        for (int l = 1, r = 2; l < r;){
            int sum = (l + r) * (r - l + 1) / 2;
            if (sum == target) {
                res.clear();
                for (int i = l; i <= r; ++i) {
                    res.emplace_back(i);
                }
                vec.emplace_back(res);
                l++;
            } else if (sum < target) {
                r++;
            } else {
                l++;
            }
        }
        return vec;
    }
};
