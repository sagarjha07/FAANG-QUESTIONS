int string_to_int(string s){
    bool flag=0;
    if(s[0]=='-'){
        flag=1;
    }
    long long res=0;
    long long p=1;
    if(flag==1){
    for(int i=s.size()-1;i>0;i--){
        res+=(s[i]-'0')*p;
        p=p*10;
    }
    }
    else{
    for(int i=s.size()-1;i>=0;i--){
        res+=(s[i]-'0')*p;
        p=p*10;
    }
    }
    if(flag==1){
        res=-1*res;
    }
    return int(res);
}
int perform(int a,int b,string op){
    if(op=="+") return (b+a);
    if(op=="-") return (b-a);
    if(op=="*") return (b*a);
    if(op=="/") return (b/a);
}
int Solution::evalRPN(vector<string> &A) {
    if(A.size()==1) return string_to_int(A[0]);
    stack<int> s;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+" || A[i]=="-" || A[i]=="*" || A[i]=="/"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            int ans=perform(a,b,A[i]);
            s.push(ans);
        }
        else{
            int val=string_to_int(A[i]);
            s.push(val);
        }
    }
    return s.top();
}
