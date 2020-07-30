/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode*first;
TreeNode*second;
TreeNode*pre;
void inorder(TreeNode*root){
    if(root==NULL) return;
    inorder(root->left);
    if(pre!=NULL && pre->val>root->val){
        if(first==NULL){
            first=pre;
        }
        if(first!=NULL) second=root;
    }
    pre=root;
    inorder(root->right);
}
vector<int> Solution::recoverTree(TreeNode* A) {
    vector<int> ans;
    first=NULL;
    second=NULL;
    pre=NULL;
    inorder(A);
    if(first==NULL || second==NULL) return ans;
    ans.push_back(first->val);
    ans.push_back(second->val);
    sort(ans.begin(),ans.end());
    return ans;
}

