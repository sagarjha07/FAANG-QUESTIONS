void sub(vector<int> &A,int i,int j,auto &v,int B,auto &ans){
    if(i==A.size()){
        vector<int> a;
        for(int k=0;k<j;k++){
            a.push_back(v[k]);
        }
        if(a.size()==B){
        sort(a.begin(),a.end());
        ans.push_back(a);
        return;
        }
        else return;
    }
    v[j]=A[i];
    sub(A,i+1,j+1,v,B,ans);
    sub(A,i+1,j,v,B,ans);
    
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int>> ans;
    vector<int> s;
    for(int i=1;i<=A;i++) s.push_back(i);
    vector<int> v(A);
    sub(s,0,0,v,B,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
