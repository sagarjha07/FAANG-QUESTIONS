vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> ans;
    int min_index=-1,max_index=-1;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]>A[i+1]){
            min_index=i;
            break;
        }
    }
    int n=A.size();
    if(min_index==-1){
        ans.push_back(-1);
        return ans;
    }
    for(int i=n-1;i>0;i--){
        if(A[i-1]>A[i]){
            max_index=i;
            break;
        }
    }
    int minele=INT_MAX;
    int maxele=INT_MIN;
    for(int i=min_index;i<=max_index;i++){
        minele=min(minele,A[i]);
        maxele=max(maxele,A[i]);
    }
    for(int i=0;i<min_index;i++){
        if(A[i]>minele) {
            min_index=i;
            break;
        }
    }
    for(int i=n-1;i>=max_index+1;i--){
        if(A[i]<maxele) {
            max_index=i;
            break;
        }
    }
    ans.push_back(min_index);
    ans.push_back(max_index);
    return ans;
}
