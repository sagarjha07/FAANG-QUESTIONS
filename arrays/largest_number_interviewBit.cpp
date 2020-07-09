bool compare(string a,string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab>ba;
}

string Solution::largestNumber(const vector<int> &A) {
    int count=0;
     string v="";
    for(int i=0;i<A.size();i++){
        if(A[i]==0) count++;
    }
    if(count==A.size()){
        v+='0';
        return v;
    }
    vector<string> s;
    for(int i=0;i<A.size();i++){
        s.push_back(to_string(A[i]));
    }
    sort(s.begin(),s.end(),compare);
    for(int i=0;i<s.size();i++){
        v+=s[i];
    }
    return v;
}
