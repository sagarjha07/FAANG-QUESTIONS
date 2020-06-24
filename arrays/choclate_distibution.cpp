#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int m;
        cin>>m;
        sort(a,a+n);
        int i=0;
        int mdiff=INT_MAX;
        while(i+m-1<n){
            int first=a[i];
            int second=a[i+m-1];
            mdiff=min(mdiff,abs(first-second));
            i++;
        }
        cout<<mdiff;
        cout<<endl;
    }
}
