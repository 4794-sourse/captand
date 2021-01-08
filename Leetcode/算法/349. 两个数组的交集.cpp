class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> q;
        vector<int> q1;
        for (int i = 0; i < nums1.size(); i++) {
            q.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (q.count(nums2[i])) {
                q1.push_back(nums2[i]);
            }
        }
        sort(q1.begin(), q1.end());
        q1.erase(unique(q1.begin(), q1.end()), q1.end());
        return q1;
    }
};

作者：4794-sourse
链接：https://leetcode-cn.com/problems/intersection-of-two-arrays/solution/di-yi-ci-ti-jie-chan-shu-li-yong-by-4794-tcdf/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
