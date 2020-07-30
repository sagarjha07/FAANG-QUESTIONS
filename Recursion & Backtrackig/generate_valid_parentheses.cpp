void generate(int o,int c,string s,vector<string> &v){
    if(o==0 && c==0){
        v.push_back(s);
        return;
    }
    if(o!=0){
        string s1=s;
        s1+='(';
        generate(o-1,c,s1,v);
    }
    if(c>o){
        string s2=s;
        s2+=')';
        generate(o,c-1,s2,v);
    }
    
}
vector<string> Solution::generateParenthesis(int A) {
    vector<string> v;
    if(A==0) return v;
    int open=A;
    int closed=A;
    string s;
    generate(open,closed,s,v);
    sort(v.begin(),v.end());
    return v;
}
