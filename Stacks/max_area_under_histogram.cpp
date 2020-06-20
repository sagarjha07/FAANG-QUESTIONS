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
        // we have to just calculate nearest smaller to left and right;
        long long left[n];
        long long right[n];
        stack<long long > s;
        for(long long i=0;i<n;i++){
            if(s.empty()){
                left[i]=-1;
            }
            else if(!s.empty() && a[i]>a[s.top()]){
                left[i]=s.top();
            }
            else{
                while(!s.empty() && a[i]<=a[s.top()]){
                    s.pop();
                }
                left[i]=s.empty()?-1:s.top();
            }
            s.push(i);
        }
        while(!s.empty()) s.pop();
        for(long long i=n-1;i>=0;i--){
            if(s.empty()){
                right[i]=n;
            }
            else if(!s.empty() && a[i]>a[s.top()]){
                right[i]=s.top();
            }
            else{
                while(!s.empty() && a[i]<=a[s.top()]){
                    s.pop();
                }
                right[i]=s.empty()?n:s.top();
            }
            s.push(i);
        }
        long long mx=INT_MIN;
        for(long long i=0;i<n;i++){
            // cout<<left[i]<<" ";
            long long temp=(right[i]-left[i]-1)*a[i];
            mx=max(mx,temp);
        }
        cout<<mx<<endl;
    }
}
