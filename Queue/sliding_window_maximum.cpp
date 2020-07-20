vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    deque<int> q(B);
    int n=A.size();
    int i;
    vector<int> ans;
    //process first B elememts separately
    for(i=0;i<B;i++){
        while(!q.empty() && A[q.back()]<A[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    
    //process the remaining elements
    for(;i<n;i++){
        ans.push_back(A[q.front()]);
        // remove the elements whicha are not part of the window
        while(!q.empty() && q.front()<=i-B){
            q.pop_front();
        }
        //remove the elements which are not of use
        while(!q.empty() && A[i]>A[q.back()]){
            q.pop_back();
        }
        // insert the element index
        q.push_back(i);
    }
    ans.push_back(A[q.front()]);
    return ans;
}
