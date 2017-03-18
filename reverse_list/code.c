/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
typedef struct ListNode listNode;

struct ListNode* reverseList(struct ListNode* head) {
    listNode* pre = NULL;
    listNode* cur = head;
    listNode* nextNode = head;
    
    while( cur != NULL ){
        nextNode=cur->next;
        cur->next = pre;
        pre = cur;
        cur = nextNode;
    }
    
    return pre;
    
}
