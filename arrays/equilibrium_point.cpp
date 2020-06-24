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
        bool flag=0;
        if(n==1) {
            cout<<"1"<<endl;
            flag=1;
        }
        else{
        int pre[n];
        int suff[n];
        pre[0]=a[0];
        suff[n-1]=a[n-1];
        for(int i=1;i<n;i++){
            pre[i]=a[i]+pre[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=a[i]+suff[i+1];
        }
        for(int i=1;i<n-1;i++){
            if(pre[i-1]==suff[i+1]){
                cout<<i+1<<endl;
                flag=1;
                break;
            }
        }
        }
        if(flag==0) cout<<"-1"<<endl;
    }
}
