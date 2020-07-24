/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode*> s1,s2;
    s1.push(A);
    while(!s1.empty()){
        TreeNode*x=s1.top();
        s2.push(x);
        s1.pop();
        if(x->left)
        s1.push(x->left);
        if(x->right)
        s1.push(x->right);
    }
    vector<int> ans;
    while(!s2.empty()){
        ans.push_back(s2.top()->val);
        s2.pop();
    }
    return ans;
}
