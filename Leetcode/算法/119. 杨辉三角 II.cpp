class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > q;
        vector<int> t;
        t.push_back(1);
        if (rowIndex == 0) {
            return t;
        }
        q.push_back({1});
        for (int i = 1; i <= rowIndex; i++) {
            vector<int> temp;
            temp.push_back(1);
            for (int j = 1; j < i; j++) {
                temp.push_back(q[i - 1][j - 1] + q[i - 1][j]);
            }
            temp.push_back(1);
            q.push_back(temp);
        }
        t = q.back();
        return t;
    }
};
