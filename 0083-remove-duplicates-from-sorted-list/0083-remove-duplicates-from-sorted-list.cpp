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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* dummy = head;
        ListNode* copy = head->next;
        while(head && head->next) {
            while(head && copy && head->val == copy->val) {
                //Look for ALL duplicates, all the way to the end
                copy = copy -> next;

            }
            head -> next = copy;
            head = head->next;
        }
        return dummy;
    }
};