class Solution {
public:
    int add(int a, int b) {
        int temp1, temp2;
        while (b) {
            temp1= a ^ b;
            temp2 = unsigned(a & b) << 1;
            a = temp1;
            b = temp2;
        }
        return a;
    }
};
