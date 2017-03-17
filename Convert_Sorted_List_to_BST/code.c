/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode bstNode;
typedef struct ListNode listNode;

int countNodes( listNode* head ){
    int count=0;
    while( head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

bstNode* listToBSTRecur( listNode** node, int len){
    
    if( len == 0 )
        return NULL;
    
    bstNode* left = listToBSTRecur(node, len>>1);
    
    bstNode* root = (bstNode*)malloc( sizeof(bstNode) );
    root->val = (*node)->val;
    root->left = left;
    
    (*node) = (*node)->next;
    
    root->right = listToBSTRecur(node, len-(len>>1)-1);
    
    return root;
    
}
struct TreeNode* sortedListToBST(struct ListNode* head){
    int count = countNodes(head);
    
    bstNode* root = listToBSTRecur( &head, count );
    
    return root;
}





