/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode listNode;
 
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(!head)
        return head;
        
    listNode* walker = head->next;
    listNode* first = head;
    listNode* pre = head;
    
    while( walker ){
        if(walker->val == val){
            pre->next = walker->next;
            free(walker);
            walker = pre->next;
        }
        else{
            pre = pre->next;
            walker = walker->next;
        }
    }
    
    if(first->val == val){
        first = first->next;
        free(head);
    }
    return first;
}
