class Solution {
public:
    int sum = 0, ans = 1;
    int getDecimalValue(ListNode* head) {
        ListNode *pre = NULL , *q = head;
        while (q) {
            ListNode *t = q->next;
            q->next = pre;
            pre =  q;
            q = t;
        }
        while (pre) {
            if (pre->val) {
                sum += ans;
            }
            ans *= 2;
            pre = pre->next;
        }
        return sum;
    }
};
