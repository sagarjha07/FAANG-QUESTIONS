#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
       ll ans=0;
       ll l=0,h=n-1;
       ll lmax=0;
       ll rmax=0;
       while(l<=h){
           if(a[l]<a[h]){
               if(a[l]>lmax)
               lmax=a[l];
               else ans+=lmax-a[l];
               l++;
           }
           else{
               if(a[h]>rmax) rmax=a[h];
               else ans+=rmax-a[h];
               h--;
           }

       }
       cout<<ans<<endl;
    }
}
