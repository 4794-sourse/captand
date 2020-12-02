class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1;
        vector<bool> ss; 
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > max) max = candies[i];
        }
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max) ss.push_back(true);
            else ss.push_back(false); 
        }
        return ss;
    }
};
