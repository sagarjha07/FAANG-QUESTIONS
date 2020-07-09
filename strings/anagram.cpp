#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int freq[256]={0};
        string ans="YES";
        if(a.size()!=b.size()){
            ans="NO";
        }
        else{
        for(int i=0;i<a.size();i++){
            freq[a[i]]+=1;
        }
        for(int i=0;i<b.size();i++){
            freq[b[i]]-=1;
        }
        for(int i=0;i<256;i++){
            if(freq[i]==1){
                ans="NO";
                break;
            }
        }
        }
        cout<<ans<<endl;
    }
}
