/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> s;
    TreeNode*curr=A;
    while(curr!=NULL || !s.empty()){
    while(curr!=NULL){
        s.push(curr);
        curr=curr->left;
    }
    curr=s.top();
    s.pop();
    ans.push_back(curr->val);
    curr=curr->right;
    }
    return ans;
}
