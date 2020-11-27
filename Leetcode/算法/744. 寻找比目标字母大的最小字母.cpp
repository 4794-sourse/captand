class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size(), mid;
        while (l < r) {
            mid = l + (r - l) / 2;
            if (letters[mid] > target) {
                r = mid;
            } else if (letters[mid] <= target){
                l = mid + 1;
            }
        }
        return l == letters.size() ? letters[0] : letters[l];
    }
};
