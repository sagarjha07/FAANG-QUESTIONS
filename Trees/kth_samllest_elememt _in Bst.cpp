/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void Inorder(TreeNode*A,int k,int &count,int &ans){
    if(A==NULL) return;
    Inorder(A->left,k,count,ans);
    count++;
    if(count==k) ans=A->val;
    Inorder(A->right,k,count,ans);
    
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int ans=-1;
    int count=0;
    Inorder(A,B,count,ans);
    return ans;
    
}
