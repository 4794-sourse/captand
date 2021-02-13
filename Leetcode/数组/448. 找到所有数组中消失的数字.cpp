class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_set<int> temp;
       for (int i = 0; i < nums.size(); i++) {
           temp.insert(nums[i]);
       }
       vector<int> q;
       for (int i = 1; i <= nums.size(); i++) {
           if (!temp.count(i)) {
               q.push_back(i);
           }
       }
       return q;
    }
};
