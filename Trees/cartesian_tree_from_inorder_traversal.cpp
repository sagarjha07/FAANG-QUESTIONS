/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int find_max(auto &A,int s,int e){
    int ans=INT_MIN;
    int mx_index;
    for(int i=s;i<=e;i++){
        if(ans<A[i]){
            ans=A[i];
            mx_index=i;
        }
    }
    return mx_index;
}
TreeNode* convert(vector<int> &A,int s,int e){
    if(s>e) return NULL;
    int mid=find_max(A,s,e);
    TreeNode* root=new TreeNode(A[mid]);
    root->left=convert(A,s,mid-1);
    root->right=convert(A,mid+1,e);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A) {
    return convert(A,0,A.size()-1);
}
