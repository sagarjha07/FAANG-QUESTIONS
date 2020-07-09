#include <iostream>
using namespace std;
long long floor(long long *a,long long s,long long e,long long ele){
    long long ans=-1;
    while(s<=e){
        long long mid=s+(e-s)/2;
        if(a[mid]==ele) return mid;
        else if(a[mid]<ele){
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    return ans;
}
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n,ele;
        cin>>n>>ele;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        cout<<floor(a,0,n-1,ele)<<endl;
    }
}
