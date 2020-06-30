#include <bits/stdc++.h>
using namespace std;
bool check_subarry_with_0_sum(int *a,int n){
    int pre=0;
    unordered_set<int> mp;
    for(int i=0;i<n;i++){
        pre+=a[i];
        if(a[i]==0 || pre==0) return true;
        else if(mp.find(pre)!=mp.end()) return true;
        else mp.insert(pre);
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(check_subarry_with_0_sum(a,n)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
