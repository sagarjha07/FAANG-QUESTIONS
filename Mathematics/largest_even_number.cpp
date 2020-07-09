#include <bits/stdc++.h>
using namespace std;
bool compare(char a,char b){
    return a>b;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end(),compare);
        if((s[s.size()-1]-'0')%2!=0){
            int j=s.size()-2;
            while(j>=0 && (s[j]-'0')%2!=0){
                j--;
            }
            if(j>=0){
                int val=s[j];
                while(j<=(s.size()-2)){
                    s[j]=s[j+1];
                    j++;
                }
                s[j]=val;
            }
        }
        cout<<s<<endl;
    }
}
