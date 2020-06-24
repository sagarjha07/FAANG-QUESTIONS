#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int i=1,j=0;
        int platforms=1;
        int res=INT_MIN;
        while(i<n && j<n){
            if(a[i]<=b[j]){
                i++;
                platforms+=1;
            }
            else if(a[i]>b[j]){
                j++;
                platforms-=1;
            }
            res=max(res,platforms);
        }
        cout<<res<<endl;
    }
}
