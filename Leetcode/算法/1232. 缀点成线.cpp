class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int k = 0, temp = 0;
        if ((coordinates[1][0] - coordinates[0][0]) == 0) {
            k = (coordinates[1][1] - coordinates[1][0]);
        } else {
             k = (coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);
        }
        for (int i = 1; i < coordinates.size(); i++) {
            for (int j = i + 1; j < coordinates.size(); j++) {
                if ((coordinates[j][0] - coordinates[i][0]) == 0) {
                    temp = (coordinates[1][1] - coordinates[1][0]);
                } else {
                    temp = (coordinates[j][1] - coordinates[i][1]) / (coordinates[j][0] - coordinates[i][0]);
                }
                if (k == temp) continue;
                else return false;
            }
        }
        return true;
    }
};
