int prime=3;
long long createHash(string str,int n){
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=((long long )(str[i])*(long long)(pow(prime,i)));
    }
    return ans;
}
long long recalculateHash(string str,int oldidx,int newidx,long long oldhash,int patlength){
    long long newhash=oldhash-str[oldidx];
    newhash/=prime;
    newhash+=((long long)(str[newidx])*(long long)(pow(prime,patlength-1)));
    return newhash;
}
bool checkEqual(string str,string pat,int s1,int e1,int s2,int e2){
    if((e1-s1)!=(e2-s2)) return false;
    while(s1<=e1 && s2<=e2){
        if(str[s1]!=pat[s2]) return false;
        s1++;
        s2++;
    }
    return true;
}

int Solution::strStr(const string A, const string B) {
    if(A.size()==0) return -1;
    if(A.size()==0 && B.size()==0) return -1;
    if(B.size()>A.size()) return -1;
    long long patHash=createHash(B,B.size());
    long long strHash=createHash(A,B.size());
    for(int i=0;i<=A.size()-B.size();i++){
        if(strHash==patHash){
            if(checkEqual(A,B,i,i+B.size()-1,0,B.size()-1)){
                return i;
            }
        }
        else if(i<(A.size()-B.size())){
            strHash=recalculateHash(A,i,i+B.size(),strHash,B.size());
        }
    }
    return -1;
}
