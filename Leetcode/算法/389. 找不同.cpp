class Solution {
public:
    char findTheDifference(string s, string t) {
        int as = 0; int at = 0;
        for (auto temp: s) {
            as += temp;
        }
        for (auto temp : t) {
            at += temp;
        }
        return at - as;
    }
};
