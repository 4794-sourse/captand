class Solution {
public:
    bool isAnagram(string s, string t) {
        return unordered_multiset(begin(s), end(s)) == unordered_multiset(begin(t), end(t));
    }
};
