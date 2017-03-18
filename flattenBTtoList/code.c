/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
typedef struct TreeNode treeNode;

void preorder( treeNode** flattenTreeNode, treeNode* root ){
    if(root == NULL)
        return NULL;
        
    treeNode* left = root->left;
    treeNode* right = root->right;
    
    
    ((*flattenTreeNode)->right) = root;
    ((*flattenTreeNode)->left) = NULL;
    (*flattenTreeNode) = (*flattenTreeNode)->right;
    
    preorder(flattenTreeNode, left);
    preorder(flattenTreeNode, right);

}

void flatten(struct TreeNode* root) {
    treeNode* flattenTreeRoot = (treeNode*)malloc( sizeof(treeNode) );
    preorder(&flattenTreeRoot, root);
    
}

