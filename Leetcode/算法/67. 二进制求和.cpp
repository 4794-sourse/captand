class Solution {
public:
    string addBinary(string a, string b) {
        int arr1[10005] = {0}, arr2[10005] = {0}, arr3[10005] = {0};
        arr1[0] = a.size(), arr2[0] = b.size();
        for (int j = 1, i = a.size() - 1; i >= 0; j++, i--) {
            arr1[j] = a[i] - '0';
        }
        for (int j = 1, i = b.size() - 1; i >= 0; j++, i--) {
            arr2[j] = b[i] - '0';
        }
        if (arr1[0] < arr2[0]) arr1[0] = arr2[0];
        for (int i = 1; i <= arr1[0]; i++) {
            arr3[i] = arr1[i] + arr2[i];
        }
        for (int i = 1; i <= arr1[0]; i++) {
            if(arr3[i] > 1) {
                arr3[i + 1] += arr3[i] / 2;
                arr3[i] %= 2;
                if (i == arr1[0]) {
                    arr1[0]++;
                }
            }
        }
        string ss = "";
        for (int i = arr1[0]; i > 0; i--) {
            ss += (arr3[i] + '0');
        }
        return ss;
    }
};
