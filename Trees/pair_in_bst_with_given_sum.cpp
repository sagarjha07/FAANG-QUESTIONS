/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode*root,int B,unordered_set<int>&s,bool &ans){
    if(root==NULL) return;
    inorder(root->left,B,s,ans);
    if(s.find(B-root->val)!=s.end()) ans=true;
    else s.insert(root->val);
    inorder(root->right,B,s,ans);
}
int Solution::t2Sum(TreeNode* A, int B) {
    bool ans=false;
    unordered_set<int> s;
    inorder(A,B,s,ans);
    return ans;
    
}
