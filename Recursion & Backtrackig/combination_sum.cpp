void solve(vector<int> &A,int B,vector<int> &path,int i,auto &ans){
    if(B==0){
        vector<int> a=path;
        sort(a.begin(),a.end());
        ans.insert(a);
        return;
    }
    else if(B<0) return;
    if(i<A.size()){
    path.push_back(A[i]);
    solve(A,B-A[i],path,i,ans);
    path.pop_back();
    solve(A,B,path,i+1,ans);
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    set<vector<int>> ans;
    vector<vector<int>> a;
    vector<int> path;
    solve(A,B,path,0,ans);
    for(auto it:ans){
        a.push_back(it);
    }
    sort(a.begin(),a.end());
    return a;
}
