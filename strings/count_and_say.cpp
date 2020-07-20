string Solution::countAndSay(int A) {
    string s="1";
    for(int k=0;k<A-1;k++){
        string ns="";
        int i=0;
        while(i<s.size()){
            int count=1;
            while((i+1)!=s.size() && s[i]==s[i+1]){
                count++;
                i++;
            }
            ns+=to_string(count);
            ns+=s[i];
            i++;
        }
        s=ns;
    }
    return s;
}
