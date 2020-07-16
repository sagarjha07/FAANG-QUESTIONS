bool isValid(vector<int> a,int k,int mid){
    int painter=1;
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum>mid){
            painter++;
            sum=a[i];
            if(painter>k) return false;
        }
    }
    return true;
}
int Solution::paint(int A, int B, vector<int> &C) {
    int mx=INT_MIN;
    int sum=0;
    for(int i=0;i<C.size();i++){
        mx=max(mx,C[i]);
        sum+=C[i];
    }
    if(A==1){
        long long a=(sum)%10000003;
        a*=(B%10000003);
        a%=10000003;
        return (int)a;
    }
    int s=mx;
    int e=sum;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isValid(C,A,mid)){
            ans=min(ans,mid);
            e=mid-1;
        }
        else s=mid+1;
    }
     long long a=(ans)%10000003;
        a*=(B%10000003);
        a%=10000003;
        return (int)a;
}
