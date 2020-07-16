int Solution::findMedian(vector<vector<int> > &A) {
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<A.size();i++){
        mn=min(mn,A[i][0]);
        mx=max(mx,A[i][A[0].size()-1]);
    }
    int desired=(A.size()*A[0].size()+1)/2;
    while(mn<mx){
        int mid=mn+(mx-mn)/2;
        int count=0;
        for(int i=0;i<A.size();i++){
            count+=(upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin());
        }
        if(count<desired){
                mn=mid+1;
            }
        else mx=mid;
    }
    return mn;
}
