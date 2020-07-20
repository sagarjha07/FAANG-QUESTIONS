string mulBy2(string s){
    int carry=0;
    for(int i=s.size()-1;i>=0;i--){
        int temp=carry+(s[i]-'0')*2;
        s[i]='0'+temp%10;
        carry=temp/10;
    }
    if(carry==1){
        s.insert(0,1,'0'+carry);
    }
    return s;
}
int Solution::power(string A) {
    if(A.size()==0) return false;
    if(A.size()==1 && A[0]=='1') return false;
    string s="1";
    while(true){
        s=mulBy2(s);
        // cout<<s<<endl;
        if(A==s) return true;
        else if(A.size()<s.size()) return false;
    }
}
