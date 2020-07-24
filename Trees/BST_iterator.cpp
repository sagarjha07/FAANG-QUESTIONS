/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
stack<TreeNode*> s;
void fill(TreeNode*root){
    TreeNode*curr=root;
    while(curr!=NULL){
        s.push(curr);
        curr=curr->left;
        
    }
}
BSTIterator::BSTIterator(TreeNode *root) {
    while(!s.empty()) s.pop();
    fill(root);
}

/** @return whether we have a next smallest number */

bool BSTIterator::hasNext() {
    return !s.empty();
}

/** @return the next smallest number */
int BSTIterator::next() {
    TreeNode*ans=s.top();
    s.pop();
    fill(ans->right);
    return ans->val;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
