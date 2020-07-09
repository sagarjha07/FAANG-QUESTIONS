void vop(Node*root,map<int,pair<int,int>> &mp,int d,int l){
    if(root==NULL) return;
    if(mp.find(d)==mp.end()){
        mp[d]=make_pair(root->data,l);
    }
    else if(mp[d].second<=l){
        mp[d]=make_pair(root->data,l);
    }
    vop(root->left,mp,d-1,l+1);
    vop(root->right,mp,d+1,l+1);
}
vector <int> bottomView(Node *root)
{
   vector<int> ans;
   map<int,pair<int,int>> mp;
   vop(root,mp,0,0);
   for(auto it:mp){
       ans.push_back(it.second.first);
   }
   return ans;
}