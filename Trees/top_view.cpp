void vop(Node*root,map<int,pair<int,int>> &mp,int d,int l){
    if(root==NULL) return;
    if(mp.count(d)==0){
        mp[d]=make_pair(root->data,l);
    }
    else if(mp[d].second>l){
        mp[d]=make_pair(root->data,l);
    }
    vop(root->left,mp,d-1,l+1);
    vop(root->right,mp,d+1,l+1);
}
void topView(struct Node *root)
{
    map<int,pair<int,int>> mp;
    vop(root,mp,0,0);
    for( auto it:mp){
        cout<<it.second.first<<" ";
    }
}