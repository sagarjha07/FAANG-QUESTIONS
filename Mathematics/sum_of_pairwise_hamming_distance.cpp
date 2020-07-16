int Solution::hammingDistance(const vector<int> &A) {
     int mod=1000000007;
     int ans=0;
    for(int i=0;i<32;i++){
        int count=0;
        for(int j=0;j<A.size();j++){
            if(A[j] & (1<<i)){
                count+=1;
            }
        }
        ans=(ans%mod+(count%mod*(A.size()-count)*2)%mod)%mod;
    }
   
    return ans%mod;
}
