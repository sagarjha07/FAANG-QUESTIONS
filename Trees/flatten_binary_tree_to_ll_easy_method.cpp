/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void ll(auto root,auto &prev){
    if(root==NULL) return;
    ll(root->right,prev);
    ll(root->left,prev);
    root->right=prev;
    root->left=NULL;
    prev=root;
}
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    TreeNode*prev=NULL;
    ll(A,prev);
    return A;
}
