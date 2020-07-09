#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans=s;
        int flag=1;
        while(flag){
            flag=0;
            int i=0;
            s=ans;
            ans="";
        while(s[i]){
            if(s[i]!=s[i+1]){
                ans+=s[i];
                i++;
            }
            else if(s[i+1] && s[i]==s[i+1]){
                while(s[i+1] && s[i]==s[i+1]){
                    flag=1;
                    i++;
                }
                i++;
            }
        }
        }
        cout<<ans<<endl;
    }
}
