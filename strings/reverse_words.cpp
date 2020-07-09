#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int start=0;
        // first of all reverse all individual words and then just reverse the whole string
        for(int end=0;end<s.size();end++){
            if(s[end]=='.'){
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
        }
        //reverse the last word
        reverse(s.begin()+start,s.end());
        //reverse the whole string
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
