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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode; 
        ListNode* list = head;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum;
            if(l1) {
                sum = l1->val;
            }
            else {
                sum = 0;
            }
            if(l2) {
                sum += l2->val;
            }
            else {
                sum+=0;
            }
            sum+=carry;
            carry = sum / 10;
            list->next = new ListNode(sum % 10);
            list = list -> next;
            if (l1) 
            l1 = l1->next;
            if (l2) 
            l2 = l2->next;
        }

        return head->next; 
    }
};