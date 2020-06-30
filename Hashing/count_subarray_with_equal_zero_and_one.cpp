#include <bits/stdc++.h>
using namespace std;
int subarrays_with_equal_0_and_1(int*a,int n){
    int pre=0;
    int count=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        pre+=a[i];
        if(pre==0){
            count+=1;
            if(mp.find(pre)==mp.end()) mp[pre]+=1;
            else if(mp.find(pre)!=mp.end()){
                count+=mp[pre];
                mp[pre]+=1;
            }
        }
        else if(mp.find(pre)!=mp.end()){
            count+=mp[pre];
            mp[pre]+=1;
        }
        else if(mp.find(pre)==mp.end()){
            mp[pre]+=1;
        }
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           if(x==0) a[i]=-1;
           else a[i]=x;
       }
       cout<<subarrays_with_equal_0_and_1(a,n)<<endl;
   }
}
