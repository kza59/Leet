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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* res = new ListNode;
        ListNode* dummy = res;
        head = head->next;
        int current = 0;
        while(head) {
            if(head->val == 0) {
            //add the node and reset
            res -> next = new ListNode(current);
            res = res -> next;
            current = 0;
            }
            else {
            //add to the current
            current += head->val;
            }
            head = head-> next;
        }
        return dummy->next;
    }
};