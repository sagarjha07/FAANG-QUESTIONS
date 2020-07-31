int Solution::majorityElement(const vector<int> &A) {
    //moore voting algorithm;
    int candidate=A[0];
    int count=1;
    for(int i=1;i<A.size();i++){
        if(A[i]==candidate) count++;
        else count--;
        if(count==0){
            candidate=A[i];
            count=1;
        }
    }
    count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==candidate) count++;
    }
    if(count>A.size()/2) return candidate;
    return -1;
}
