/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *pre = new ListNode(0);
        pre->next = head;
        ListNode *q = pre, *p = head;
        while (p) {
            if (p->val == val) {
                q->next = p->next;
            } else {
                q = p;
            }
            p = p->next;
        }
        return pre->next;
    }
};
/*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur = head;
        if(!cur) return nullptr;
        while(cur && cur->val == val) {
            cur = cur->next;
        }
        ListNode* ans = cur;
        while(cur && cur->next) {
            ListNode *p = cur;
            while(p->next->val == val) p = p->next;
            cur = p->next;
        }
        return ans;
    }
};*/