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
    bool isPalindrome(ListNode* head) {
        ListNode *low = head, * fast = head, *pre = nullptr;
        while (fast) {
            low = low->next;
            fast = fast->next ? fast->next->next : fast->next;
        }
        while (low) {
            ListNode *temp = nullptr;
            temp = low->next;
            low->next = pre;
            pre = low;
            low = temp;
        }
        while (head && pre) {
            if (head->val != pre->val) {
                return false;
            }
            head = head->next;
            pre = pre->next;
        }
        return true;
    }
};
