bool is_vowel(vector<char>&a,char ch){
    for(int i=0;i<a.size();i++){
        if(a[i]==ch) return true;
    }
    return false;
}
int Solution::solve(string A) {
    vector<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
    if(A.size()==0) return 0;
    if(A.size()==1){
        if(is_vowel(vowels,A[0])) return 1;
        else return 0;
    } 
    int ans=0;
    
    for(int i=0;i<A.size();i++){
        if(is_vowel(vowels,A[i])){
            ans=(ans+(A.size()-i))%10003;
        }
    }
    return ans%10003;
}
