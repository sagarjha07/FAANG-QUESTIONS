#include <iostream>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n,s;
        cin>>n>>s;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        long long sum=0;
        long long j=0;
        long long i;
        bool flag=0;
        for(i=0;i<n;i++){
            sum+=a[i];
            if(sum==s){
                flag=1;
                cout<<j+1<<" "<<i+1<<endl;
                break;
            }
            if(sum>s){
                while(sum>s){
                    sum-=a[j];
                    j++;
                    if(sum==s){
                        cout<<j+1<<" "<<i+1<<endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1) break;
        }
        if(i==n) cout<<"-1"<<endl;
    }
}
