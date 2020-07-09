int Solution::maxSpecialProduct(vector<int> &A) {
    vector<int> left_value(A.size());
    left_value[0]=0;
    stack<int> s1;
    stack<int> s2;
    s1.push(0);
    for(int i=1;i<A.size();i++){
        while(s1.empty()==false){
        if(A[s1.top()]>A[i]) break;
        s1.pop();
        }
        left_value[i]=s1.empty()?0:s1.top();
        s1.push(i);
    }
    vector<int> right_value(A.size());
    right_value[A.size()-1]=0;
    s2.push(A.size()-1);
    for(int i=A.size()-2;i>=0;i--){
        while(s2.empty()==false){
            if(A[s2.top()]>A[i]) break;
            s2.pop();
        }
        right_value[i]=s2.empty()?0:s2.top();
        s2.push(i);
    }
    long long mxproduct=-1;
    for(int i=0;i<A.size();i++){
        long long left=(long long)(left_value[i]);
        long long right=(long long)(right_value[i]);
        mxproduct=max(mxproduct,(left*right));
    }
   return mxproduct%1000000007;
}