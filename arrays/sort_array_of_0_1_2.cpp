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
        int l=0,m=0,h=n-1;
            while(m<=h){
                if(a[m]==0){
                    swap(a[m],a[l]);
                    l++;
                    m++;
                }
                else if(a[m]==1){
                    m++;
                }
                else{
                    swap(a[m],a[h]);
                    h--;
                }
            }
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
    }
}
