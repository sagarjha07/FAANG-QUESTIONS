vector<int> Solution::maxone(vector<int> &A, int B) {
    vector<int> ans;
    int start=0;
    int max_start=0;
    int end=0;
    int max_end=0;
    int zerocount=0;
    int max_consecutive_one=INT_MIN;
    //using sliding window technique with two pointers
    for(end=0;end<A.size();end++){
        if(A[end]==0){
            zerocount++;
        }
        if(zerocount>B){
            while(zerocount>B){
                if(A[start]==0){
                    zerocount--;
                }
                start++;
            }
        }
        if(max_consecutive_one<(end-start+1)){
            max_consecutive_one=end-start+1;
            max_start=start;
            max_end=end;
        }
    }
    for(int i=max_start;i<=max_end;i++){
        ans.push_back(i);
    }
    return ans;
}
