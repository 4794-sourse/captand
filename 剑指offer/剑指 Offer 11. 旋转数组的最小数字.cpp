class Solution {
public:
    int minArray(vector<int>& numbers) {
        int head = 0, tail = numbers.size() - 1, mid;
        while (head < tail) {
            mid = head + (tail - head) / 2;
            if (numbers[tail] < numbers[mid]) {
                head = mid + 1;
            } else if (numbers[mid] > numbers[tail]) {
                tail = mid;
            } else {
                tail -= 1;
            }
        }
        return numbers[head];
    }
};
