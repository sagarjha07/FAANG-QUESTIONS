int Solution::findRank(string A) {
    int mod=1000003;
    int n=A.size();
    int fact[n];
    fact[0]=1;
    for(int i=1;i<n;i++){
        fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i]) count+=1;
        }
        ans=(ans%mod+(count%mod)*(fact[A.size()-i-1]%mod))%mod; // number of skipped strings
    }
    return (ans+1)%mod;
}
