int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0;
    int j=0;
    int k=0;
    int diff=INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size()){
        int minimum=min(A[i],min(B[j],C[k]));
        int maximum=max(A[i],max(B[j],C[k]));
        if(maximum-minimum<diff){
            diff=maximum-minimum;
        }
        if(A[i]==minimum) i++;
        else if(B[j]==minimum) j++;
        else k++;
    }
    return diff;
}
