vector<int> Solution::flip(string A) {
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='1') count+=1;
    }
    vector<int> ans;
    if(count==A.size()) return ans;
    
   int diff=0;
   int max_diff=INT_MIN;
   int cur_start=1;
   int max_start=1;
   int end=1;
   for(int i=0;i<A.size();i++){
       if(A[i]=='0') diff+=1;
       else diff--;
       if(diff<0){
           diff=0;
           cur_start=i+2;
       }
       if(diff>max_diff){
           max_diff=diff;
           max_start=cur_start;
           end=i+1;
       }
   }
   ans.push_back(max_start);
   ans.push_back(end);
   return ans;
}
