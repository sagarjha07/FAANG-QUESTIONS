/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void ll(auto root){
    if(root==NULL) return;
    if(root->left!=NULL){
        ll(root->left);
        TreeNode*temp=root->right;
        root->right=root->left;
        root->left=NULL;
        TreeNode*curr=root->right;
        while(curr->right!=NULL){
            curr=curr->right;
        }
        curr->right=temp;
    }
        ll(root->right);
}
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ll(A);
    return A;
}
