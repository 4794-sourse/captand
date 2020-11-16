class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        ListNode *pre = NULL;
        ListNode *cur = head;
        while (cur) {
            ListNode *t = cur->next;
            cur->next = pre;
            pre = cur;
            cur = t;
        }
        for (int i = 1; i < k; i++) {
            if (pre != NULL) {
                 pre = pre->next;
            }
        }
        return pre->val;
    }
};
