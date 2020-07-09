#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int a,b;
        cin>>a>>b;
        int l=0,m=0,h=n-1;
        while(m<=h){
            if(arr[m]<a){
                swap(arr[m],arr[l]);
                m++;l++;
            }
            else if(arr[m]>b){
                swap(arr[m],arr[h]);
                h--;
            }
            else m++;
        }
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
