/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void diagonal(TreeNode*root,map<int,vector<int>>&mp,int d){
    if(root==NULL) return;
    mp[d].push_back(root->val);
    diagonal(root->left,mp,d+1);
    diagonal(root->right,mp,d);
    
}
vector<int> Solution::solve(TreeNode* A) {
    map<int,vector<int>> mp;
    diagonal(A,mp,0);
    vector<int> ans;
    for(auto it:mp){
        vector<int> v=it.second;
        for(auto x:v){
            ans.push_back(x);
        }
    }
    return ans;
}
