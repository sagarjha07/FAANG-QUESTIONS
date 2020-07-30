/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    if(A==NULL) return;
    
    TreeLinkNode* h=A;
    // h->next=NULL;
    while(h!=NULL){
        TreeLinkNode*nlh=NULL;
        TreeLinkNode*pre=NULL;
        while(h!=NULL){
            if(h->left!=NULL){
                if(pre==NULL){
                    nlh=h->left;
                    pre=nlh;
                }
                else{
                    pre->next=h->left;
                    pre=h->left;
                }
            }
            if(h->right!=NULL){
                if(pre==NULL){
                    nlh=h->right;
                    pre=nlh;
                }
                else{
                    pre->next=h->right;
                    pre=h->right;
                }
            }
            h=h->next;
        }
        // pre->next=NULL;
        h=nlh;
    }
}
