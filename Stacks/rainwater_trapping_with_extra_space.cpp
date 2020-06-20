#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
       ll lmax[n];
       ll rmax[n];
       lmax[0]=a[0];
       rmax[n-1]=a[n-1];
       for(ll i=1;i<n;i++){
           if(a[i]<=lmax[i-1]){
               lmax[i]=lmax[i-1];
           }
           else lmax[i]=a[i];
       }
       for(ll i=n-2;i>=0;i--){
           if(a[i]<=rmax[i+1]){
               rmax[i]=rmax[i+1];
           }
           else rmax[i]=a[i];
       }
       ll ans=0;
       for(ll i=0;i<n;i++){
           ans+=min(lmax[i],rmax[i])-a[i];
       }
       cout<<ans<<endl;
    }
}
