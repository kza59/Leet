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
        ListNode* p1 = head;
        ListNode* p2 = head;
        int c{0};
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return nullptr;
        while(p2) {
            ++c;
            p2 = p2 -> next;

        }
        for(int i{0};i<c-n-1;++i) {
            cout << head->next->val;

            head = head->next;
        }
        cout << head->val << endl;
        if(c-n == 0) {
            p1 = p1->next;
        }
        if(head->next->next == nullptr) {
            head->next = nullptr;
        }
        else {
            head -> next = head->next->next;
        }
        return p1;
    }
};