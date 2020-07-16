int Solution::search(const vector<int> &A, int B) {
    int s=0;
    int e=A.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(A[mid]==B) return mid;
        if(A[mid]>=A[s]){
            if(B<A[mid] && B>=A[s]){
                e=mid-1;
            }
            else s=mid+1;
        }
        else if(A[mid]<=A[e]){
            if(B>A[mid] && B<=A[e]){
                s=mid+1;
            }
            else e=mid-1;
        }
    }
    return 
}
