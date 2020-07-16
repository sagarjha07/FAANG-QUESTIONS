string Solution::convertToTitle(int A) {
    string ans="";
    while(A>0){
        int rem=A%26;
        if(rem==0){
            ans.push_back('Z');
            A=(A/26)-1;
        }
        else{
            ans.push_back('A'+rem-1);
            A=A/26;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
