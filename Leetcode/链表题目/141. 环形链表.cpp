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
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        struct ListNode *p = head;
        struct ListNode *q = head->next;
        while (q != p) {
            if (q == NULL || q->next == NULL) {
                return false;
            }
            p = p->next;
            q = q->next->next;
        }
        return true;
    }
};