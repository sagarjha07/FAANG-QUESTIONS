dpair fast_diameter(Node*root){
    dpair p;
    if(root==NULL){
        p.diameter=0;
        p.height=0;
        return p;
    }
    dpair pleft=fast_diameter(root->left);
    dpair pright=fast_diameter(root->right);
    p.height=max(pleft.height,pright.height)+1;
    p.diameter=max(pleft.height+pright.height+1,max(pleft.diameter,pright.diameter));
    return p;
}
int diameter(Node* node) {
    dpair p=fast_diameter(node);
    return p.diameter;
}