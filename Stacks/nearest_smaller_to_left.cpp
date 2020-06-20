#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        long long left[n];
        stack<long long> s;
        for(long long i=0;i<n;i++){
            if(s.empty()){
                left[i]=-1;
            }
            else if(!s.empty() && a[i]>s.top()){
                left[i]=s.top();
            }
            else{
                while(!s.empty() && a[i]<=s.top()){
                    s.pop();
                }
                left[i]=s.empty()?-1:s.top();
            }
            s.push(a[i]);
        }
        for(long long i=0;i<n;i++){
            cout<<left[i]<<" ";
        }
        cout<<endl;
    }
}
