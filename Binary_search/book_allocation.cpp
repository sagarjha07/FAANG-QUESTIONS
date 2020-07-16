bool isValid(vector<int> a,int k,int mid){
    int students=1;
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum>mid){
            students++;
            sum=a[i];
            if(students>k) return false;
        }
    }
    return true;
}
int Solution::books(vector<int> &A, int B) {
    if(A.size()<B) return -1;
    int mx=INT_MIN;
    int sum=0;
    for(int i=0;i<A.size();i++){
        mx=max(mx,A[i]);
        sum+=A[i];
    }
    int s=mx;
    int e=sum;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isValid(A,B,mid)){
            ans=mid;
            e=mid-1;
        }
        else s=mid+1;
    }
    return ans;
}
