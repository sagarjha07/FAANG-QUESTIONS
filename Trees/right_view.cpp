void right_view(Node*root,int level,int*max_level){
    if(root==NULL) return;
    if(level>*max_level){
        cout<<root->data<<" ";
        *max_level=level;
    }
    right_view(root->right,level+1,max_level);
    right_view(root->left,level+1,max_level);
    
}
void rightView(Node *root)
{
    int level=1;
    int max_level=0;
   right_view(root,level,&max_level);
}