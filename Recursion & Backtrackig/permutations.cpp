void per(vector<int> A,int i,vector<vector<int>> & ans){
    if(i==A.size()){
        ans.push_back(A);
        return;
    }
    for(int j=i;j<A.size();j++){
        swap(A[i],A[j]);
        per(A,i+1,ans);
        swap(A[i],A[j]);
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> ans;
    per(A,0,ans);
    return ans;
}
