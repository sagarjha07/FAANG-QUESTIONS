string Solution::simplifyPath(string A) {
    vector<string> v;
    istringstream ss(A);
    string token,res;
    while(getline(ss,token,'/')){
        if(token=="" || token==".") continue;
        else if(token!="..") v.push_back(token);
        else if(!v.empty()) v.pop_back();
    }
    for(auto i:v){
        res+=("/"+i);
    }
    return (v.empty()?"/":res);
}
