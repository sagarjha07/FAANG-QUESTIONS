/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void find(TreeNode* root,TreeNode*parent,int d,unordered_map<TreeNode*,pair<int,int>>&mp){
     if(root==NULL) return;
     mp[root]={d,parent->val};
     find(root->left,root,d+1,mp);
     find(root->right,root,d+1,mp);
 }
 vector<int> Solution::solve(TreeNode* A, int B) {
    unordered_map<TreeNode*,pair<int,int>> mp;
    vector<int> ans;
    find(A,A,0,mp);
    int lb=-1;
    int pb=-1;
    for(auto it:mp){
        if(it.first->val==B){
            lb=it.second.first;
            pb=it.second.second;
        }
    }
    for(auto it:mp){
        int level=it.second.first;
        int parent=it.second.second;
        if(level==lb && parent!=pb){
            ans.push_back(it.first->val);
        }
    }
    return ans;
}

