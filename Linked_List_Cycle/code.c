/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
typedef struct ListNode listNode;

bool hasCycle(struct ListNode *head) {
    listNode* turtle = head;
    listNode* rabbit = head;
    bool hasLoop = false;
    
    while( (turtle!=NULL && rabbit != NULL) && rabbit->next != NULL){
        turtle = turtle->next;
        rabbit = rabbit->next->next;
        if(turtle == rabbit){
            hasLoop = true;
            break;
        }
    }
    
    return hasLoop;
}
