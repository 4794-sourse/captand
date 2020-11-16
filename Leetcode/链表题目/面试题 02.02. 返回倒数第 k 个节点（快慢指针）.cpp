int kthToLast(struct ListNode* head, int k){
    struct ListNode *fast = head;
    struct ListNode *low = head;
    while (k--) {
        if (fast) {
            fast = fast->next;
        }
    }
    while (fast) {
        low = low->next;
        fast = fast->next;
    }
    return low->val;
}
