/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* convert(const vector<int> &A,int s,int e){
    if(s>e) return NULL;
    int mid=s+(e-s)/2;
    TreeNode* root=new TreeNode(A[mid]);
    root->left=convert(A,s,mid-1);
    root->right=convert(A,mid+1,e);
    return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    return convert(A,0,A.size()-1);
}
