long long pow(long long a,long long b,long long m){
    long long res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}
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
         map<char,int> mp;
        for(int k=i;k<n;k++){
            mp[A[k]]+=1;
        }
        long long d=1;
        for(auto a:mp){
            d=(d%mod*(fact[a.second]%mod))%mod;
        }
        ans=(ans+count*(fact[A.size()-i-1]%mod)*pow(d,mod-2,mod)%mod)%mod; // number of skipped strings
    }
    return (ans+1)%mod;
}
