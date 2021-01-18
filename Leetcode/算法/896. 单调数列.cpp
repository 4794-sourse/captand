class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int k = 0, m = 0;
        for (int i = 0; i < A.size() - 1; i++) {
            if (A[i] > A[i + 1]) {
                k++;
            } else if (A[i] < A[i + 1]){
                m++;
            }
        }
        if (k && m) return false;
        return k * m == 0;
    }
};
