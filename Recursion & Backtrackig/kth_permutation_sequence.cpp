void solve(auto &digits,auto&fact,int n,int k,string &ans){
    if(n==1){
        ans+=to_string(digits[0]);
        return;
    }
    int index=k/(fact[n-1]);
    if((k%fact[n-1])==0) index-=1;
    ans+=to_string(digits[index]);
    digits.erase(digits.begin()+index);
    k=k-fact[n-1]*index;
    solve(digits,fact,n-1,k,ans);
}
string Solution::getPermutation(int A, int B) {
   vector<int> digits;
   for(int i=1;i<=A;i++){
       digits.push_back(i);
   }
   vector<int> fact;
   long long int f=1;
   fact.push_back(f);
   for(int i=1;i<A;i++){
       f*=(long long)(i);
      if(f>B){
          fact.push_back(INT_MAX);
          f=INT_MAX;
      }
      else fact.push_back(f);
      
   }
   string ans="";
   solve(digits,fact,A,B,ans);
   return ans;
}
