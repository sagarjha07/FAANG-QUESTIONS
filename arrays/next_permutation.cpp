vector<int> Solution::nextPermutation(vector<int> &A) {
    int i;
    for(i=A.size()-1;i>0;i--){
        if(A[i]>A[i-1]){
            break;
        }
    }
    if(i==0) {
        sort(A.begin(),A.end());
        return A;
    }
    int x=i-1; // index of the x less than y
    //finding an element z greater than x from right
    for(int j=A.size()-1;j>=i;j--){
        if(A[j]>A[x]){
            swap(A[j],A[x]);
            break;
        }
    }
    sort(A.begin()+i,A.end());
    return A;
}
