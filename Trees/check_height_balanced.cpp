class hbpair{
  public:
  int height;
  bool balance;
};
hbpair check(Node*root){
    hbpair p;
    if(root==NULL){
        p.height=0;
        p.balance=true;
        return p;
    }
    hbpair pleft=check(root->left);
    hbpair pright=check(root->right);
    p.height=max(pleft.height,pright.height)+1;
    if(abs(pleft.height-pright.height)<=1 && pleft.balance && pright.balance){
        p.balance=true;
        return p;
    }
    p.balance=false;
    return p;
}
bool isBalanced(Node *root)
{
    hbpair p=check(root);
    return p.balance;
}