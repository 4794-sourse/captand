class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for (char c : s) {
            if (isalnum(c)) {
                s1 += tolower(c);
            }
        }
        int i = 0, j = s1.size() - 1;
        while (i < j) {
            if (s1[i] != s1[j]) {
                return false;
            }
            i++; j--;
        }
        return true;
    }
};
