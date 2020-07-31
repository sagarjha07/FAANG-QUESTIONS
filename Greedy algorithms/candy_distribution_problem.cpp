int Solution::candy(vector<int> &A) {
    vector<int> left(A.size(),1);
    vector<int> right(A.size(),1);
    //left to right movement
    for(int i=1;i<A.size();i++){
        if(A[i]>A[i-1]){
            left[i]=left[i-1]+1;
        }
    }
    //right to left movement
    for(int i=A.size()-2;i>=0;i--){
        if(A[i]>A[i+1]){
            right[i]=right[i+1]+1;
        }
    }
    int ans=0;
    for(int i=0;i<A.size();i++){
        ans+=max(left[i],right[i]);
    }
    return ans;
}
