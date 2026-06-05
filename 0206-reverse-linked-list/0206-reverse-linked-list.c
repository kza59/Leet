/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    // make new list
    struct ListNode* new = NULL;
    // new->val = -1;
    while(head != NULL) {
        struct ListNode* temp = malloc(sizeof(struct ListNode));
        temp->val = head->val;
        temp->next = new;
        new = temp;
        printf("%d\n", head->val);
        head = head->next;
    }
    return new;    
}