#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int count=0;
        for(int k=n-1;k>=0;k--){
        int i=0;
        int j=k-1;
        while(i<j){
            if(a[i]+a[j]==a[k]){
                count++;
                i++;
                j--;
            }
            else if(a[i]+a[j]<a[k]) i++;
            else j--;
        }
    }
    if(count==0) cout<<"-1"<<endl;
    else cout<<count<<endl;
    }
}
