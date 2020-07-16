int Solution::sqrt(int A) {
    if(A==0 || A==1) return A;
    int s=0;
    int e=A;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid==A/mid) return mid;
        else if(mid<A/mid){
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    return ans;
}
