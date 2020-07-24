/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ans;
    TreeNode*curr=A;
    stack<TreeNode*> s;
    while(curr!=NULL || !s.empty()){
        while(curr!=NULL){
            ans.push_back(curr->val);
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        // if(curr!=NULL)
        curr=curr->right;
    }
    return ans;
}
