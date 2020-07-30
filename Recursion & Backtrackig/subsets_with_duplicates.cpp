void sub(vector<int> &A,int i,int j,auto &v,auto &ans){
    if(i==A.size()){
        vector<int> a;
        for(int k=0;k<j;k++){
            a.push_back(v[k]);
        }
        sort(a.begin(),a.end());
        ans.insert(a);
        return;
    }
    v[j]=A[i];
    sub(A,i+1,j+1,v,ans);
    sub(A,i+1,j,v,ans);
    
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    set<vector<int>> s;
    vector<vector<int>> ans;
    vector<int> v(A.size());
    sub(A,0,0,v,s);
    for(auto it:s){
        ans.push_back(it);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
