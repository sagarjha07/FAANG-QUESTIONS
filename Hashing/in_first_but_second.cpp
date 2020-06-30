#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long a[n];
        long long b[m];
        for(long long i=0;i<n;i++) cin>>a[i];
        for(long long i=0;i<m;i++) cin>>b[i];
        unordered_set<int> s;
        for(long long i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(long long i=0;i<m;i++){
            if(s.find(b[i])!=s.end()){
                s.erase(b[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(s.find(a[i])!=s.end()){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
}
