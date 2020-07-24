int Solution::solve(vector<int> &A) {
    if(A.size()==0 || A.size()==1) return true;
    stack<int> s;
    int root=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(root>A[i]) return false;
        
        while(!s.empty() && s.top()<A[i]){
            root=s.top();
            s.pop();
        }
        s.push(A[i]);
    }
    return true;
}
