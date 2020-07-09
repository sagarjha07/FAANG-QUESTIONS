vector<int> verticalOrder(Node *root)
{
    map<int,vector<int>> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
        Node*ele=temp.first;
        int hd=temp.second;
        mp[hd].push_back(ele->data);
        if(ele->left){
            q.push({ele->left,hd-1});
        }
        if(ele->right){
            q.push({ele->right,hd+1});
        }
    }
    vector<int> ans;
    for(auto it:mp){
        vector<int> v=it.second;
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]);
        }
    }
    return ans;
}