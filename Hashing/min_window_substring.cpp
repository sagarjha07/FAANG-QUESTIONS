#include <bits/stdc++.h>
using namespace std;
string min_wiindow_substring(string str,string pat){
    int len1=str.size();
    int len2=pat.size();
    if(len1<len2) return "-1";
    int hash_str[256]={0};
    int hash_pat[256]={0};
    for(int i=0;i<len2;i++){
        hash_pat[pat[i]]+=1;
    }
    int start=0;
    int min_len=INT_MAX;
    int count=0;
    int start_index=-1;
    for(int j=0;j<len1;j++){
        hash_str[str[j]]+=1;
        if(hash_pat[str[j]]!=0 && hash_pat[str[j]]>=hash_str[str[j]]){
            count+=1;
        }
        if(count==len2){
            while(hash_pat[str[start]]<hash_str[str[start]] || hash_pat[str[start]]==0){
                if(hash_pat[str[start]]<hash_str[str[start]]){
                    hash_str[str[start]]-=1;
                }
                start+=1;
            }
            int len=j-start+1;
            if(min_len>len){
                min_len=len;
                start_index=start;
            }
        }
    }
    if(start_index==-1){
        return "-1";
    }
    return str.substr(start_index,min_len);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s,pat;
        cin>>s>>pat;
        cout<<min_wiindow_substring(s,pat)<<endl;
    }
}
