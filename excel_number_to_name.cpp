#include<bits/stdc++.h>
using namespace std;
void number_to_name(int n){
    string ans="";
    while(n>0){
        int rem=n%26;
        if(rem==0){
            ans+='Z';
            n=(n/26)-1;
        }
        else{
            ans+=(rem-1+'A');
            n=n/26;
        } 
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        number_to_name(n);
    }
}
