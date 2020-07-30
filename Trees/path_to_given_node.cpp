/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool find(auto root,auto B,auto &path){
    if(root==NULL) return false;
    if(root->val==B){
        path.push_back(root->val);
        return true;
    }
    bool l=find(root->left,B,path);
    if(l==true){
        path.push_back(root->val);
        return true;
    }
    bool r=find(root->right,B,path);
    if(r==true){
        path.push_back(root->val);
        return true;
    }
    return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> path;
    bool f=find(A,B,path);
    reverse(path.begin(),path.end());
   return path;
}
