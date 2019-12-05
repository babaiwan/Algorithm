 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//maxDepth=max(root.left , root.rigth)+1
int maxDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;
    else
        return max(maxDepth(root->left),maxDepth(root->right))+1;
}

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
