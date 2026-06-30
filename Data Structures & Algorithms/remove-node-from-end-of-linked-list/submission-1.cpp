/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return NULL;
        if (head->next == NULL && n == 1) return NULL;
        ListNode* cur = head;
        ListNode* prev = NULL;
        while (cur) {
            ListNode* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        ListNode* h = prev;
        ListNode* back = prev;
        if (n > 1) {
            while (n > 1) {
                back = h;
                h = h->next;
                n--;
            }
            back->next = h->next;
        }
        else{
            prev=prev->next;
        }
        cur = prev;
        ListNode* prev2 = NULL;
        while (cur) {
            ListNode* nxt = cur->next;
            cur->next = prev2;
            prev2 = cur;
            cur = nxt;
        }
        return prev2;
    }
};
