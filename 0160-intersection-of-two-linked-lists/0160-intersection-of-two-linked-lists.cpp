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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        vector<ListNode*> a;
        vector<ListNode*> b;

        while(headA) {
            a.push_back(headA);
            headA = headA->next;
        }
        while(headB) {
            b.push_back(headB);
            headB = headB -> next;

        }
        if(a.size() > b.size()) {
            int offset = a.size()-b.size();
            int i{0};
            for(int i{0};i<b.size();++i) {
                if(a[i+offset] == b[i]) {
                    return a[i+offset];
                }
            }
            return nullptr;
        }
        else {
            int offset = b.size()-a.size();
            int i{0};
            for(int i{0};i<a.size();++i) {
                if(a[i] == b[i+offset]) {
                    return b[i+offset];
                }
            }
            return nullptr;
        }
        return nullptr;
    }
};