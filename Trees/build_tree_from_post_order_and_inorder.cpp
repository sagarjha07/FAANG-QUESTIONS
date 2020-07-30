/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* build(auto &A,auto &B,int s,int e,int &i){
    if(s>e){
        return NULL;
    }
    TreeNode*root=new TreeNode(A[i]);
    int index=-1;
    for(int j=s;j<=e;j++){
        if(A[i]==B[j]){
            index=j;
            break;
        }
    }
    i++;
    root->right=build(A,B,index+1,e,i);
    root->left=build(A,B,s,index-1,i);
    return root;
    
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    reverse(B.begin(),B.end());
    int i=0;
    return build(B,A,0,B.size()-1,i);
}
