/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
     vector<vector<int>> ans;
    if(A==NULL){
        return ans;
    }
   map<int,vector<int>> mp;
    queue<pair<TreeNode*,int>> q;
    q.push({A,0});
    while(!q.empty()){
        TreeNode*f=q.front().first;
        int hd=q.front().second;
        q.pop();
        mp[hd].push_back(f->val);
        if(f->left){
            q.push({f->left,hd-1});
        }
        if(f->right){
            q.push({f->right,hd+1});
        }
    }
    for(auto it:mp){
        vector<int> v=it.second;
        vector<int> row;
        for(auto x:v){
            row.push_back(x);
        }
        ans.push_back(row);
    }
    return ans;
}
