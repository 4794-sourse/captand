class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int n = s.size();
        for (int i = 0, j = n - 1; i <= j; i++, j--) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
};
