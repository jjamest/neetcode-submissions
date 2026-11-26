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
        ListNode* newHead = new ListNode();
        newHead->next = head;

        ListNode* first = newHead;
        ListNode* second = head;
        for (int i = 0; i < n; i++) {
            second = second->next;
        }

        while (second) {
            first = first->next;
            second = second->next;
        }

        if (!first->next) {
            return nullptr;
        }

        first->next = first->next->next;
        return newHead->next;
    }
};
