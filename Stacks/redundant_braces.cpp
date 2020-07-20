int Solution::braces(string A) {
    if(A.size()==3 && A[0]=='(' && A[2]==')'){
        return true;
    }
    stack<char> s;
    for(int i=0;i<A.size();i++){
        char cur=A[i];
        if(cur=='(' || cur=='+' || cur=='-' || cur=='*' || cur=='/' ){
            s.push(cur);
            // cout<<s.top()<<" ";
        }
        else if(cur==')'){
            char x=s.top();
            s.pop();
           if(x=='(') return true;
           s.pop();
        }
    
    }
    return false;
}