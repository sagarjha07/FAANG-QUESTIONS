vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> ans;
    set<vector<int>> s;
    sort(A.begin(),A.end());
    for(int k=0;k<A.size();k++){
        int i=k+1;
        int j=A.size()-1;
        long long int f=(long long int)A[k];
        f=-1*f;
        while(i<j){
            long long int sum=((long long int )(A[i])+(long long int)(A[j]));
            if(sum==f){
                s.insert({A[k],A[i],A[j]});
                i++;
                j--;
            }
            else if(sum<f) i++;
            else j--;
        }
    }
    for(auto it:s){
        ans.push_back(it);
    }
    return ans;
}
