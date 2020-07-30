/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void find(TreeNode*root,int B,vector<vector<int>> &ans,vector<int> path){
    if(root==NULL) return;
    path.push_back(root->val);
    if(root->val==B && root->left==NULL && root->right==NULL){
        ans.push_back(path);
        return;
    }
    find(root->left,B-root->val,ans,path);
    find(root->right,B-root->val,ans,path);
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    int sum=0;
    vector<vector<int>> ans;
    vector<int> path;
    find(A,B,ans,path);
    return ans;
}
