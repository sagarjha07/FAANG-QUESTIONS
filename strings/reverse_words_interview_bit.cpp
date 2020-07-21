string Solution::solve(string A) {
    if(A.size()==1) return A;
    istringstream ss(A);
    string token;
    vector<string> v;
    while(getline(ss,token,' ')){
        // cout<<token<<" ";
        if(token!="")
        v.push_back(token);
    }
    string res="";
    for(int i=v.size()-1;i>=0;i--){
        
        res+=v[i];
        if(i!=0)
        res+=' ';
    }
    return res;
}
