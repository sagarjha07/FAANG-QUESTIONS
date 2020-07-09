#include <bits/stdc++.h>
using namespace std;
int value(char a){
    if(a=='I') return 1;
    if(a=='V') return 5;
    if(a=='X') return 10;
    if(a=='L') return 50;
    if(a=='C') return 100;
    if(a=='D') return 500;
    if(a=='M') return 1000;
    return -1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
       string str;
       cin>>str;
        int res = 0; 
  
    // Traverse given input 
    for (int i = 0; i < str.length(); i++) { 
        // Getting value of symbol s[i] 
        int s1 = value(str[i]); 
  
        if (i + 1 < str.length()) { 
            // Getting value of symbol s[i+1] 
            int s2 = value(str[i + 1]); 
  
            // Comparing both values 
            if (s1 >= s2) { 
                // Value of current symbol 
                // is greater or equal to 
                // the next symbol 
                res = res + s1; 
            } 
            else { 
                // Value of current symbol is 
                // less than the next symbol 
                res = res + s2 - s1; 
                i++; 
            } 
        } 
        else { 
            res = res + s1; 
        } 
    } 
    cout<<res<<endl;
    }
}
