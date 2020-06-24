#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> v;
        v.push_back(a[n-1]);
        int leader=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]>=leader){
                v.push_back(a[i]);
                leader=a[i];
            }
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}
