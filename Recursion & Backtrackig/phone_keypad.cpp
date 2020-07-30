vector<string> codes={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> Solution::letterCombinations(string A) {
    if(A.size()==0){
        vector<string> v;
        v.push_back("");
        return v;
    }
    int dig=A[0]-'0';
    string rem=A;
    rem.erase(rem.begin());
    vector<string> rans=letterCombinations(rem);
    vector<string> ans;
    string cdig=codes[dig];
    for(int i=0;i<cdig.size();i++){
        for(auto it:rans){
            it.insert(it.begin(),cdig[i]);
            ans.push_back(it);
        }
    }
    return ans;
}
