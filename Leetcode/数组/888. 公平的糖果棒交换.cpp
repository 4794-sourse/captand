class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        vector<int> ans;
        int num1 = 0, num2 = 0, n1 = A.size(), n2 = B.size();
        for (int i = 0; i < A.size(); i++) {
            num1 += A[i];
        }
        for (int i = 0; i < B.size(); i++) {
            num2 += B[i];
        }
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (num1 - A[i] + B[j] == num2 - B[j] + A[i]) {
                ans.push_back(A[i]);
                ans.push_back(B[j]);
                break;
            } else if (num1 - A[i] + B[j] < num2 - B[j] + A[i]) {
                j++;
            } else {
                i++;
            }
        }
        return ans;
    }
};
