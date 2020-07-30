/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* A) {
    if(A==NULL) return NULL;
    if(A->left==NULL && A->right==NULL) return A;
    A->left=solve(A->left);
    A->right=solve(A->right);
    if(A->left!=NULL && A->right==NULL){
        TreeNode*temp=A->left;
        delete(A);
        return temp;
    }
    if(A->left==NULL && A->right!=NULL){
        TreeNode*temp=A->right;
        delete(A);
        return temp;
    }
    return A;
}
