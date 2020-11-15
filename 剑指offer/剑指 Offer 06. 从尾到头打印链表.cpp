int* reversePrint(struct ListNode* head, int* returnSize){
    struct ListNode *p = head;
    int n = 0;
    int *ans;
    ans = (int *)malloc(sizeof(int) * 10000);
    while (p) {
        n++;
        p = p->next;
    }
    p = head;
    *returnSize = n;
    while (n--) {
        ans[n] = p->val;
        p = p->next;
    }
    return ans;
}
