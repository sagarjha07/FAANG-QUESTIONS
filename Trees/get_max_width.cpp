int getMaxWidth(Node* root)
{
    if(root==NULL) return 0;
    queue<Node*> q;
    int res=0;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        res=max(res,count);
        while(count--){
            Node*f=q.front();
            q.pop();
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
    }
     return res;
}