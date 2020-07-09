void left_view(Node*root,int level,int*max_level){
    if(root==NULL) return;
    if(level>*max_level){
        cout<<root->data<<" ";
        *max_level=level;
    }
    left_view(root->left,level+1,max_level);
    left_view(root->right,level+1,max_level);
    
}
void leftView(Node *root)
{
    int level=1;
    int max_level=0;
   left_view(root,level,&max_level);
   
}